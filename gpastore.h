#ifndef GPASTORE_H
#define GPASTORE_H

#include <iostream>
#include <stdexcept>
#include <vector>
#include <map>
#include <set>

class GPAStore
{
public:
    GPAStore();
    ~GPAStore();
    void addClass(std::string className);
    double getClassGPA(std::string className);
private:
    std::map<std::string, double> master;

};

#endif // GPASTORE_H
