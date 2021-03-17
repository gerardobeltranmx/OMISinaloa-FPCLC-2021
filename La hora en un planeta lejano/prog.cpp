#include <iostream>
#include <iomanip>
using namespace std;
#define DIA_SEG 12 * 70 * 50
#define HORA_SEG 70 * 50
#define MIN_SEG  50

int main(int argc, char const *argv[])
{
    int seg, min, horas, dias;
    cin >> seg;

    dias = seg / (DIA_SEG);
    seg = seg % (DIA_SEG);

    horas = seg / (HORA_SEG);
    seg = seg % (HORA_SEG); 

    min = seg / MIN_SEG;
    seg = seg % MIN_SEG;

    cout << dias << " " << horas << " " << min << " " << seg << endl;

    return 0;
}
