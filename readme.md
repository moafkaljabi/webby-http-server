# Project Overview
Project Name: Webby HTTP Server

Description: Webby HTTP Server is a basic web server implemented in C++ from scratch without any external libraries for educational purposes. It serves static HTML, CSS, and image files.

## Features

- Serve static HTML files
- Serve CSS files
- Serve Javascript files
- Serve image files (e.g., PNG,JPEG)
- Basic logging of server activity



## Setup Instructions

### Prerequisites

- C++ compiler (g++)
- Make sure you have the required permissions to open the port (e.g., 8080).

### Compilation and Running

1. **Clone the repository:**

    ```bash
    git clone https://github.com/Aryandev12/webby-http-server.git
    cd webby-http-server
    ```

2. **Compile the server:**

    ```bash
    g++ -o server main.cpp
    ```

3. **Run the server:**

    ```bash
    ./server 8080
    ```

## Usage

Once the server is running, you can access it through a web browser or using tools like `curl`.

**Example**:
- Open a web browser and go to `http://localhost:8080/index.html`.

## Example Files

### Example HTML File (`index.html`)

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Basic Web Page</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <div class="container">
        <h1>Welcome to My Basic Web Page</h1>
        <p>This is a simple web page that includes a PNG image.</p>
        <img src="image.png" alt="A sample PNG image" class="centered-image">
    </div>
</body>
</html>
```


### Example CSS File (`styles.css`)
```
body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-color: #f4f4f4;
    color: #333;
}

.container {
    max-width: 800px;
    margin: 50px auto;
    padding: 20px;
    background-color: #fff;
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
    text-align: center;
}

h1 {
    color: #2c3e50;
}

.centered-image {
    display: block;
    margin: 20px auto;
    max-width: 100%;
    height: auto;
    border: 2px solid #2c3e50;
    border-radius: 5px;
}
```
## OUTPUT 
![webby](https://github.com/Aryandev12/webby-http-server/assets/123394855/a5d0689e-5fdf-49ea-82aa-c60b6fe7ff1e)

## Contributing

Contributions are welcome! If you find a bug or have a feature request, please open an issue. Feel free to fork the repository and submit a pull request with your improvements.








