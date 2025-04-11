from http.server import BaseHTTPRequestHandler, HTTPServer

class RequestHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        self.send_response(200)
        self.send_header('Content-type', 'text/html')
        self.end_headers()
        text = """
        <h1>Welcome to our server!</h1>
        <p>This is a simple HTTP server written in Python using the http.server module.</p>
        <p>The server is running on localhost:8000 and can be accessed from any device on the same network.</p>
        <p>Some possible uses for this server include:</p>
        <ul>
            <li>Serving static websites or web applications</li>
            <li>Providing a RESTful API for other applications to interact with</li>
            <li>Hosting a blog or news site</li>
            <li>Creating a simple file sharing system</li>
        </ul>
        """
        self.wfile.write(text.encode())

def run_server():
    server_address = ('localhost', 8000)
    httpd = HTTPServer(server_address, RequestHandler)
    print("Server running on localhost:8000")
    httpd.serve_forever()


run_server()