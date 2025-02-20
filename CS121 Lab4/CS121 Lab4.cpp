/*
	Zach Hofmeister		2/25/19
	Lab 4- Overloading constructors		Baseball: Create a baseball team by assigning the id and batting averages of your players.
*/

#include "pch.h"
#include <iostream>

using namespace std;

class BaseBallPlayer {
	private:
		int id;
		double battingAve;
	public:
		//Constructors
		BaseBallPlayer() {
			id = 999;
			battingAve = 0.5;
		}
		BaseBallPlayer(int i) {
			id = i;
			battingAve = 0.5;
		}
		BaseBallPlayer(double bat) {
			id = 999;
			battingAve = bat;
		}
		BaseBallPlayer(int i, double bat) {
			id = i;
			battingAve = bat;
		}
		//Getters
		int getID() {
			return id;
		}
		double getAve() {
			return battingAve;
		}
};

void displayTeam(BaseBallPlayer, BaseBallPlayer, BaseBallPlayer, BaseBallPlayer); //Displays batting averages of all BaseBallPlayers

int main() {
	cout << "===Welcome to the create your own baseball team app!===" << endl;
	cout << endl;
	cout << "No input needed for a catcher, using default values." << endl;
	BaseBallPlayer catcher = BaseBallPlayer();
	cout << "Catcher " << catcher.getID() << " generated!" << endl;
	cout << endl;
	
	int ssID;
	double ssAve;
	cout << "A shortstop requires an ID and Batting Average." << endl;
	cout << "Shortstop's ID: ";
	cin >> ssID;
	do {
		cout << "Shortstop's Batting Average: ";
		cin >> ssAve;
		if (ssAve < 0 || ssAve > 1) {
			cout << "Invalid batting average, must be between 0-1." << endl;
		}
	} while (ssAve < 0 || ssAve > 1);
	BaseBallPlayer shortstop = BaseBallPlayer(ssID, ssAve);
	cout << "Shortstop " << shortstop.getID() << " generated!" << endl;
	cout << endl;

	double ofAve;
	cout << "An outfielder only requires a Batting Average." << endl;
	do {
		cout << "Outfielder's Batting Average: ";
		cin >> ofAve;
		if (ofAve < 0 || ofAve > 1) {
			cout << "Invalid batting average, must be between 0-1." << endl;
		}
	} while (ofAve < 0 || ofAve > 1);
	BaseBallPlayer outfielder = BaseBallPlayer(ofAve);
	cout << "Outfielder " << outfielder.getID() << " generated!" << endl;
	cout << endl;

	int batID;
	cout << "A batter only requires an ID." << endl;
	cout << "Batter's ID: ";
	cin >> batID;
	BaseBallPlayer batter = BaseBallPlayer(batID);
	cout << "Batter " << batter.getID() << " generated!" << endl;
	cout << endl;

	displayTeam(catcher, shortstop, outfielder, batter);

	return 0;
}

void displayTeam(BaseBallPlayer catcher, BaseBallPlayer shortstop, BaseBallPlayer outfielder, BaseBallPlayer batter) { //Displays batting averages of all BaseBallPlayers
	cout << "Catcher's Batting Average is " << catcher.getAve() << endl;
	cout << "Shortstop's Batting Average is " << shortstop.getAve() << endl;
	cout << "Outfielder's Batting Average is " << outfielder.getAve() << endl;
	cout << "Batter's Batting Average is " << batter.getAve() << endl;
	cout << "The team's collective batting average is " << (catcher.getAve() + shortstop.getAve() + outfielder.getAve() + batter.getAve()) / 4 << endl;
}

/*
SAMPLE OUTPUT
===Welcome to the create your own baseball team app!===

No input needed for a catcher, using default values.
Catcher 999 generated!

A shortstop requires an ID and Batting Average.
Shortstop's ID: 99
Shortstop's Batting Average: 20
Invalid batting average, must be between 0-1.
Shortstop's Batting Average: 1
Shortstop 99 generated!

An outfielder only requires a Batting Average.
Outfielder's Batting Average: 10
Invalid batting average, must be between 0-1.
Outfielder's Batting Average: 0
Outfielder 999 generated!

A batter only requires an ID.
Batter's ID: 3
Batter 3 generated!

Catcher's Batting Average is 0.5
Shortstop's Batting Average is 1
Outfielder's Batting Average is 0
Batter's Batting Average is 0.5
The team's collective batting average is 0.5

C:\Users\zachh\Documents\GitHub\CS121 Lab4\Debug\CS121 Lab4.exe (process 1760) exited with code 0.
Press any key to close this window . . .
*/