#include "gpastore.h"
using namespace std;

GPAStore::GPAStore()
{

}

GPAStore::~GPAStore()
{

}

void GPAStore::addClass(string className)
{
    map<string, double>::iterator mit;
    mit = master.find(className);
    //if the class hasn't been added to database
    if(mit == master.end())
    {
        master.insert(make_pair(className, 0));
    }
    else
    {
        throw invalid_argument("class already exists.");
    }
}

double GPAStore::getClassGPA(string className)
{
    map<string, double>::iterator mit;
    mit = master.find(className);
    return mit->second;
}
