FROM debian:stable
RUN apt update && apt install -y  build-essential 
RUN useradd -m vscode
USER vscode
