FROM ubuntu:22.04
WORKDIR /app
COPY file.cpp .
RUN apt-get update
RUN apt-get install -y g++
RUN g++ file.cpp -o app
CMD [ "./app" ]