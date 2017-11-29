#include "ObjectHolderHolder.h"

ObjectHolderHolder::ObjectHolderHolder()
{
  //ctor
}

ObjectHolderHolder::ObjectHolderHolder(int ID, int numberOfHolders, int numberOfObjectsPerHolder)
{
  m_ObjectHolderHolder = {};
  m_IDNum = ID;
  m_numberOfHolders = numberOfHolders;
  m_numberOfObjectsPerHolder = numberOfObjectsPerHolder;
  for(int i = 0; i < m_numberOfHolders; i ++)
  {
    BaseObjectHolder temp(numberOfObjectsPerHolder, i);
    m_ObjectHolderHolder.push_back(temp);
  }
}

void ObjectHolderHolder::print()
{
  cout << "STARTING HOLDER HOLDER PRINT STATEMENT*********************************" << endl;
  cout << "ObjectHolderHolder ID: " << m_IDNum << endl;
  for(int i = 0; i < m_numberOfHolders; i ++)
  {
    m_ObjectHolderHolder[i].print();
  }
  cout << "ENDING HOLDER HOLDER PRINT STATEMENT***********************************" << endl;
}

ObjectHolderHolder::~ObjectHolderHolder()
{
  //dtor
}
