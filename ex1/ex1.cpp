// Faktoriyel Hesaplama

#include <iostream>
using namespace std;
int main()
{
    int x;
    int fakt=1;
    cout << "Faktoriyeli alinacak deger = ";
    cin >> x;

    for ( ; x > 1; x--) {
        fakt = fakt * x;
    }
    cout << "Sonuc = " << fakt << endl;
        
    system("pause");
    return 0;
}

