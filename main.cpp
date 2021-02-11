#include <iostream>
#include <string>

using namespace std;

const int k = 15;

int main(){
    // Kintamieji
    //int k = 15;
    string name;
    string greet;
    string lines[k];
    int width;

    // Pasisveikinimo eilutė ir įvestis
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter width:";
    cin >> width;

    while(width > k){
        cout << "Enter width(<" << k << "):";
        cin >> width;
    }

    // Tikrinam vyras ar moteris
    if(name.back()== 's'){
        greet = "* Sveikas, ";
    } else {
        greet = "* Sveika, ";
    }

    greet += name + " *";

    int n = greet.size(); // Pasisveikinimo eilutės ilgis

    // Viršutinis rėmelis
    for (int i = 0; i < n; i++){
            lines[0] += "*";
    };
    cout << lines[0] << endl;

    // Šoniniai rėmeliai (su tarpais) ^
    for(int i = 0; i < (width / 2) - 1; i++){
        lines[i+1] = "*";
        for(int j = 0; j < n - 2; j++){
            lines[i+1] += " ";
        }
        lines[i+1] += "*";
    }

    // Šoninių rėmelių spausdinimas
    for(int i = 0; i < (width / 2) - 1; i++){
        cout << lines[i+1] << endl;
    }
    
    // Pasisveikinimo spausdinimas
    cout << greet << endl;


    // Šoninio rėmelio generavimas (po pasisveikinimu)
    for(int i = 0; i < (width / 2) - 1; i++){
        lines[width / 2 + i] = "*";
        for(int j = 0; j < n - 2; j++){
            lines[width / 2 + i] += " ";
        }
        lines[width / 2 + i] += "*";
    }

    // Šoninių rėmelių spausdinimas (po pasisveikinimu)
    for(int i = 0; i < (width / 2) - 1; i++){
        cout << lines[width / 2 + i] << endl;
    }

    // Apatinio rėmelio generavimas ir spausdinimas
    for (int i = 0; i < n; i++){
            lines[width - 1] += "*";
    };
    cout << lines[width - 1] << endl;
}