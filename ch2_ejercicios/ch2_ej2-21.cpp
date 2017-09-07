// 2.21 (Display Shapes with Asterisks) Write a program that prints a box,
//      an oval, an arrow and a diamond..

#include <iostream>

using namespace std;

int main (void)
{
    int option = 0;

    cout << "\nSelect an option:\n  1. Box\n  2. Oval\n  3. Arrow\n  4. Diamond\n\n  Option: ";
    cin >> option;
    
    if (option == 1) {
        cout << "\n\t*********\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t*********\n" << endl;
    }
    else if (option == 2) {
        cout << "\n\t   ***\n\t *     *\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t*       *\n\t *     *\n\t   ***\n" << endl;
    }
    else if (option == 3) {
        cout << "\n\t    *\n\t   ***\n\t  *****\n\t    *\n\t    *\n\t    *\n\t    *\n\t    *\n\t    *\n" << endl;
    }
    else if (option == 4) {
        cout << "\n\t    *\n\t   * *\n\t  *   *\n\t *     *\n\t*       *\n\t *     *\n\t  *   *\n\t   * *\n\t    *\n" << endl;
    }
    else {
        cout << "\nSorry, option not developed yet!" << endl;
    }

    return 0;
}
