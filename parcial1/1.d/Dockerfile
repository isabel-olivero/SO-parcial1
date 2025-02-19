#imagen base
FROM japeto/so-tools:latest

#create the working directory 
WORKDIR /app

#Copy source file
COPY main.cpp .

#compile source file
RUN g++ -o main main.cpp

#Define the default command to run the program
CMD [ "./main" ]