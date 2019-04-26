# SNMP Agent

Coded using C programming languange, it is basically an simple snmpwalk softawre which is used to get
server information base on oid . So the usage is the same as SNMPWalk command.
User just need to run it which specific command to request a certain Oid . The snmpwalk will send the oid and get 
the response from java SNMP manager that managing the server. The ip targeted was local host so there
is no need for specifiying the ip address.




# SNMP Manager

Coded in JAVA environment runtime , it is and simple SNMPD software where it will manage the server and by receiveing the Oid Requested
from the agent. The rules or configuration has been pre configure in the coding. 
# Way to Compile : -

  1. Install maven <pkg_add maven>
  2. Install Java Development Kit <pkg_add jdk>
  3. Clone snmp for java module git <git clone https://github.com/kaazing/snmp4j.git>
  4. Use Maven for clean installation . <mv install clean>
  5. Succesfully install the SNMP4J module for java compilation. You can compile the file normally.
