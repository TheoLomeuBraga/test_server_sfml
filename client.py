import socket
import base64

HOST = "127.0.0.1"
PORT = 32768
DATA_SIZE = 100



client_socket = socket.socket()  # instantiate
client_socket.connect((HOST, PORT))


mensage = "cliente aqui python"
client_socket.send(base64.b64encode(mensage.encode("ascii")))



