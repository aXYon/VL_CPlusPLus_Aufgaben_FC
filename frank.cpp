// Aufgabe FC

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

cout << "Melodie-Zufallsgenerator" << endl;

int melodyLength = 0;
string notesArray[12] = {"C","Cis","D","Dis","E","F","Fis","G","Gis","A","Ais","H"};




while(true){
  cout << "Bitte geben Sie die Länge der Zufallsmelodie ein. Zum beenden die Zahl 0 eingeben." << endl;
  cin >> melodyLength;

    if(melodyLength == 0){
      cout << "Programm beendet" << endl;
      break;

    } else if(melodyLength >= 1){
        cout << "Das war Ihre Melodie" << endl;
        for (int i=0; i < melodyLength; i++) {
            cout << notesArray[rand()%12] << endl;
        }
    }
  }
}
