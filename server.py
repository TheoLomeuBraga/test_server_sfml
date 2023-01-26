import socket
import base64

HOST = "127.0.0.1"
PORT = 32768
DATA_SIZE = 100

server_socket = socket.socket()
server_socket.bind((HOST, PORT))

server_socket.listen(1)
conn, address = server_socket.accept()
print("Connection from: " + str(address))



data = conn.recv(DATA_SIZE).decode('ascii')
data = base64.b64decode(data)

print("from connected user: " + str(data))
conn.close()



