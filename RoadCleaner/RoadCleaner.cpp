#include <iostream>
using namespace std;

int main()
{
    label:
    float meter;
    float rabatklipning;
    float rabatskrabning;
    float rabatskrab = 100.00 / 100.00;
    float rabatklip = 50.00 / 100.00;
    float opstart = 750;

    string type;
    // Definer om det er klip eller skrab
    cout << "Vælg klip eller skrab ";
    cin >> type;

    if (type == "klip") {
        // Definer antal meter
        cout << "skriv antal meter ";
        cin >> meter;

        rabatklipning = rabatklip * meter + opstart;

            //Output
        cout << "Rabatklipning " << rabatklipning << ",-DKK \n";

        //else if
    }  if (type == "skrab") {
        // Definer antal meter
        cout << "skriv antal meter ";
        cin >> meter;

        rabatskrabning = (rabatskrab * meter) + opstart;

            //Output
            cout << "rabatskrab " << rabatskrabning << ",-DKK \n";
    }
    goto label;
}
