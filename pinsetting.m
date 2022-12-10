mypi=raspi;
showPins(mypi)
mypi.AvailableDigitalPins
configurePin(mypi,4,'DigitalOutput')
writeDigitalPin(mypi,4,1)