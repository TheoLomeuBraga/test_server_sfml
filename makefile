


compiler_linux=g++



font_reader_cpp_path=./src/Font_Reader/leitor_de_fontes_TMP_linux.cpp


includes=-I./src/Font_Reader -I./src/Theo_Master_Peace -I./src/Theo_Master_Peace_Core -I./include -I./include/freetype

built_path=./built

engine_cpp_linux_path=./src/test_server.cpp

tags_linux=-std=c++17 -pipe 

libs_linux=-lsfml-network -lsfml-system

definitions_linux=

linux:
	${compiler_linux} ${tags_linux} ./src/test_server.cpp  ${includes} ${definitions_linux} ${libs_linux} -o ${built_path}/simple_server 
	${compiler_linux} ${tags_linux} ./src/test_client.cpp  ${includes} ${definitions_linux} ${libs_linux} -o ${built_path}/simple_client