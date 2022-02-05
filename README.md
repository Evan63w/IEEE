# IEEE
This Arduino code finds the distance to foreign objects from two ultrasonic sensors. The idea is to measure the time it takes for the signal to reach the receiver
once it has left the transmitter. Dividing this time by two will return the time it taken for the sound waves to reach the target object. 

Using distance = speed * time, and using the average speed of sound under typical conditions, the program returns the centimeters to an object from both sensors. 
