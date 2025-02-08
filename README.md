# OOP-Horse-Race

Will have 2 classes: Horse and Race

The general layout of each class is described in chart.svg  
The following  will be breakdowns of the methods im each class

```
Horse class:
	
Horse() is the constructor

advance():
	flips a coin and stores result
	if coin == 1:
		Horse.position += 1;
printLane():
	for i in range(15):
		if Horse.position != i:
			print(".")
		else print(Horse.id)

isWinner():
	if Horse.position == Horse.trackLength:
		return true
	else:
		return false

Race class:
	numHorses = 5
	Horse horses[numHorses]
	trackLength = 15


Race() is the constructor

run():
	bool keepGoing = true
	while keepGoing:
		for i in range numHorses:
			horses[i].advance()
			if horse[i].isWinner():
				keepGoing = false
				print(Horse i wins!

			horses[i].printLane
		print(press Enter to continue)
		get user input
	
		
main():
creates a Race object and uses run method
```
