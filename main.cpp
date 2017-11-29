#include <iostream>
#include "BaseObject.h"
#include "BaseObjectHolder.h"
#include "ObjectHolderHolder.h"

using namespace std;

int main()
{
    cout << "BaseObject Testing ---------------------------------" << endl;

    BaseObject obj1(1);
    obj1.print();

    cout << "BaseObjectHolder Testing -----------------------------" << endl;
    BaseObjectHolder objHolder1(5, 1);
    objHolder1.print();

    cout << "ObjectHolderHolder Testing -----------------------------" << endl;
    ObjectHolderHolder objHH1(1, 3, 3);
    objHH1.print();




    return 0;
}
