#include <iostream>
#include <vector>

class Person {
    double getIncome (){
        return 0;
    }
};

void payTaxes(double& income){
    income *= 0.87;
}

class Student : public Person {
public:
    virtual double getIncome(){
        double stip = 5000.;
        return stip;
    }
};

class Teacher : public Person {
public:
    virtual double getIncome(){
        auto salary = 3000.;
        payTaxes(salary);
        return salary;
    }
    void teach(){

    }
};

class workingStudent : public Teacher, public Person {
public:
    double getIncome(){
        return Teacher::getIncome + Student::getIncome();
    }
};

а

int main() {
    auto a = 10.;
    auto b = static_cast<int> (a);
    std::cout << b << std::endl;
    std::vector<Student*> students;
    Student denis;
    Student* denisPtr = &denis;
    workingStudent niki;
    workingStudent* nikiPtr = &niki;
    students.push_back(denisPtr);
    students.push_back()

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
