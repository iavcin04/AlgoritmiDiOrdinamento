/*
** Sorter.cpp
*/

#include <iostream>
using namespace std;

class Sorter {

  private:
    void saluta() {
        cout << "Buongiorno, sono uno molto ordinato!" << endl;
    }

  public:
    Sorter() {
        saluta();
    }

};

int main()
{
    cout << "Inizio programma (main)." << endl;

    Sorter s;

    cout << "Fine programma (main)." << endl;
    return 0;
}
