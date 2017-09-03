
# Defines the RPI variable which is needed by rc-switch/RCSwitch.h
CXXFLAGS=-DRPI -fPIC

all: send codesend RFSniffer libcodesend.so

send: ../rc-switch/RCSwitch.o send.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi
	
codesend: ../rc-switch/RCSwitch.o codesend.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi
	
RFSniffer: ../rc-switch/RCSwitch.o RFSniffer.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $+ -o $@ -lwiringPi
	
libcodesend.so: ../rc-switch/RCSwitch.o libcodesend.o
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -shared $+ -o $@ -lwiringPi
	
clean:
	$(RM) ../rc-switch/*.o *.o send codesend servo RFSniffer

