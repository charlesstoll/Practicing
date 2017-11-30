#ifndef BASEOBJECT_H
#define BASEOBJECT_H
#include <iostream>

using namespace std;

class BaseObject
{
  public:
    BaseObject();
    BaseObject(int count);
    virtual ~BaseObject();

    int GetCounter() { return m_Counter; }
    void SetCounter(int val) { m_Counter = val; }
    void print();
    void setID(int newID) {m_Counter = newID;}

  protected:

  private:
    int m_Counter;
};

#endif // BASEOBJECT_H
