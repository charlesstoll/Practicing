#include "BaseObject.h"

BaseObject::BaseObject()
{
  //ctor
}

BaseObject::BaseObject(int count)
{
  m_Counter = count;
}

BaseObject::~BaseObject()
{
  //dtor
}

void BaseObject::print()
{
  cout << "BaseObject: " << m_Counter << endl;
}
