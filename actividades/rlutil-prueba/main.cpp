#include <iostream>
#include "rlutil.h"
using namespace std;

int main()
{
    int opcion;
    rlutil::setBackgroundColor(rlutil::BLUE);
    rlutil::setColor(rlutil::WHITE);
    do {
        rlutil::cls();
        cout << __VERSION__ << std::endl;
        cout << "------------------------" << endl;
        cout << " 1 - opcion 1. " << endl;
        cout << " 2 - opcion 2. " << endl;
        cout << " 3 - opcion 3. " << endl;
        cout << "------------------------" << endl;
        cout << " 0 - salir. " << endl;
        cout << endl << endl << "opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 0:
            cout << "hasta luego!" << endl << endl << endl;
            break;
        case 1:
            rlutil::cls();
            rlutil::locate(2,5);
            cout << "opcion 1 ejemplo" << endl << endl;
            rlutil::anykey();
            break;
        case 2:
            int n1, n2;
            rlutil::cls();
            rlutil::locate(2,2);
            cout << "    +     = ";
            rlutil::locate(2,2);
            cin >> n1;
            rlutil::locate(8,2);
            cin >> n2;
            rlutil::locate(13,2);
            cout << n1 + n2;
            rlutil::anykey();
            break;
        case 3:
            cout << "opcion 3" << endl << endl;
            break;
        default:
            rlutil::setColor(rlutil::RED);
            cout << "opcion invalida!" << endl << endl;
            rlutil::anykey();
            rlutil::setColor(rlutil::WHITE);
            break;
        }
    } while (opcion != 0);   // 👈 esto faltaba

    return 0;
}
