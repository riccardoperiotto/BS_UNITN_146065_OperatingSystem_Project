# Operating systems [140469]
## Project

Delivered project for the Operating System course of the bachelor degree in Computer Science, University of Trento.
Course professor: Bruno Crispo
Collaborators:
- Battistotti Tommaso
- Berlanda Leonardo 
- Farina Davide 

The project consists of two main objects: the 'home' programme, which simulates the entire home automation system, and the 'maunalMode' programme, which allows interaction by external agents. 

Once the project has been compiled by invoking 'make build', it is possible to execute the 'home' programme with the invocation of the "./run.sh" script; similarly, with "./manualMode.sh" it is possible to execute the commands from the outside.

Makefile commands:
- "make": the action set by default is "make help".
- "make help": provides a set of guidelines for using the home automation system
- "make build": creates the build (where it puts the object files) and bin (where it puts the compiled executables) folders
- "make clean": deletes the bin and build folders

One of the main objectives of the project was communication between processes. 
We decided to use anonymous pipes for each exchange of information between a parent process and the corresponding 
child processes as in our opinion this is the 'tightest' communication possible.
For the exchange of information with the external command executor (manualMode) we used FIFO and signals (in the absence of a direct hierarchy between the processes concerned).
Finally, for the link and unlink commands we used message queues to dispose of the exchange of 
information in anonymous pipes, make the transfer more intuitive on a conceptual level and delve into 
a larger number of IPC technologies presented during the course.
