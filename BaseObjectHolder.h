#ifndef BASEOBJECTHOLDER_H
#define BASEOBJECTHOLDER_H

#include <vector>
#include "BaseObject.h"

using namespace std;

class BaseObjectHolder
{
  public:
    BaseObjectHolder();
    BaseObjectHolder(int numObjectsm, int objectHolderIDNum);
    virtual ~BaseObjectHolder();
    void print();

  protected:

  private:
    int m_objectHolderIDNumber;
    int m_numberOfObjects;
    vector<BaseObject> m_objectHolder;
};

#endif // BASEOBJECTHOLDER_H
