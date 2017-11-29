#ifndef OBJECTHOLDERHOLDER_H
#define OBJECTHOLDERHOLDER_H

#include <vector>
#include "BaseObject.h"
#include "BaseObjectHolder.h"

using namespace std;

class ObjectHolderHolder
{
  public:
    ObjectHolderHolder();
    virtual ~ObjectHolderHolder();
    ObjectHolderHolder(int ID, int numberOfHolders, int numberOfObjectsPerHolder);
    void print();

  protected:

  private:
    int m_IDNum;
    int m_numberOfObjectsPerHolder;
    int m_numberOfHolders;
    vector<BaseObjectHolder> m_ObjectHolderHolder;
};

#endif // OBJECTHOLDERHOLDER_H
