#include"server.cpp"
#include <string.h>
#include"request.cpp"
#include"response.cpp"
int main(int argc, char* argv[]){
    Server server = Server(argv[1]);
    struct sockaddr_in client_addr;
    socklen_t client_addr_size;
    int s_fd;
    s_fd = server.start();
    client_addr_size = sizeof(struct sockaddr_in); 
    char client_req_buffer[1024]; 
   



    while(1){
        //handle client requests.
        //Accept system call .
        std::cout<< " <============= Waiting for new connections ===========> " <<std::endl;
        int client_socket_fd = accept(s_fd, (struct sockaddr*)&client_addr, &client_addr_size);
        if(client_socket_fd < 0){
            std::cerr << "Failed to accept client request." << std::endl;
            exit(1);
        }
        std::cout << "Client connected." << std::endl;
        //handle client request.
        //read from the client.
        read(client_socket_fd, client_req_buffer, 1024);
        HttpRequest req = HttpRequest();
        
        req.parseRequest(client_req_buffer);
        // for(auto it = req.headers.begin(); it != req.headers.end(); it++){
        //     std::cout << it->first << " : " << it->second << std::endl;
        // }
        HttpResponse res= HttpResponse();
        std::string body = req.readHtmlFile(req.path);
        std::string response = res.frameHttpResponse("200","OK",req.headers,body);
        std::cout<<response <<std::endl;
        //write to client.
        write(client_socket_fd, response.c_str(), response.length());
        //close client socket.
        close(client_socket_fd);
      


    }


    return 0;
}