#include "BaseObjectHolder.h"

BaseObjectHolder::BaseObjectHolder()
{
  //ctor
}

BaseObjectHolder::BaseObjectHolder(int numObjects, int objectHolderIDNum)
{
  m_objectHolder = {};
  m_objectHolderIDNumber = objectHolderIDNum;
  m_numberOfObjects = numObjects;
  for(int i = 0; i < m_numberOfObjects; i ++)
  {
    BaseObject temporary(i);
    m_objectHolder.push_back(temporary);
  }
}

void BaseObjectHolder::print()
{
  cout << "Object Holder ID: " << m_objectHolderIDNumber << endl;
  for(int i = 0; i < m_numberOfObjects; i ++)
  {
    cout << "     ";
    m_objectHolder[i].print();
  }
}

BaseObjectHolder::~BaseObjectHolder()
{
  //dtor
}
