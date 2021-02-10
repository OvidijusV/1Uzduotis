#include <iostream>
#include <string>

using namespace std;

int main(){
    // Kintamieji
    string greetLine;
    string name;
    string borderTop, borderBottom;
    string borderSide1, borderSide2;

    // Pasisveikinimo eilutė ir įvestis
    greetLine = "* Sveikas, ";
    cout << "Enter your name: ";
    cin >> name;
    greetLine += name + " *";

    int n = greetLine.size(); // Pasisveikinimo eilutės ilgis

    // Viršutinis/apatinis rėmelis
    for (int i = 0; i < n; i++){
            borderTop += "*";
    };
    borderBottom = borderTop;

    // Šoniniai rėmeliai (su tarpais)
    borderSide1 = "*";
    for (int i = 0; i < n - 2; i++){
        borderSide1 += " ";
    };
    borderSide1 += "*";
    borderSide2 = borderSide1;
    
    // Spausdinamas įrėmintas pasisveikinimas
    cout << borderTop << endl << borderSide1 << endl << greetLine << endl << borderSide2 << endl << borderBottom;
}