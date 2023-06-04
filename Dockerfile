FROM ubuntu:latest

# Atualiza o sistema e instala as dependências
RUN apt-get update && apt-get install -y \
    build-essential \
    gfortran \
    python3-dev

# Define o diretório de trabalho
WORKDIR /app

# Copia os arquivos necessários para o diretório de trabalho
COPY . /app

#RUN gfortran hello-world.f90 -o hello

# Compila o código em C
#RUN gcc -shared -o pytran.so -fPIC wrapper.c

# Comando de exemplo para uso posterior
#CMD [ "python3" ]
