
# MACHINE STATES // PROCESS

><---- IMPORTANT ----><
--->That`s just a document about the process, so the variables
that are presented here are just the ones that`s going to get 
changed and used during the process.
    And the configuration variables needs to be set during
the STATE 1, for good practices, please set the configuration
variables :
Cheio : UINT; // 4x4 - Total capacity
P1    : UINT; // 4x1 - Pump 1 flow rate
P2    : UINT; // 4x2 - Pump 2 flow rate
>

----> STATE 1 : GATHERING INFORMATION
--- In that part of the process we will get the process set.
So the machine will be stopped and accepting the setup.

--> Variables to be written:
    

----> STATE 2 : FILLING UP THE TANK
--> After the start being pressed, the variables will writen 
on the PLC, and the filling up process will start.

----> STATE 3 : MIXING
--> When the determined amount of liquids finishes being poured
in the tank, the PLC will read the variable TimeM, and activate
the motor until the time is reached.

----> STATE 4 : DRAINING
--> When the time is reached, the motor will be stopped,
and then the drain valve will be opened together with the pump.

----> STATE 5 : PROCESS
--> After all the liquid get drained, the Mixer will stay
in a stopped position and waiting for an "OK" of the operator
so the process can continue again.
