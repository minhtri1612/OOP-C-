// Define a class called Employee. Declare the following private data 
// members:
// • Employee Id;
// • Employee name;
// • Gender;
// • Department ID.
// Also declare the following member functions for your class:
// • A constructor to initialize private data members;
// • Member functions to set and get employee info;
// • A member function to print an employee’s info on the screen.
// Define a new class called Manager. Assume that a manager is also an 
// employee. Create employee and manager objects in the main function
#include <iostream>
#include <string>
using namespace std;
class Employee{
    private:
    int EmpId;
    string Empname;
    string Empgender;
    int DepartId;
    public:
    // A constructor to initialize private data members; 
    Employee(int EmpId,string Empname,string Empgender,int DepartId){
        this->EmpId=EmpId;
        this->Empname=Empname;
        this->Empgender=Empgender;
        this->DepartId=DepartId;
    }
    //set info 
    void setInfo(int id, string name, string gender, int Id){
        EmpId=id;
        Empname=name;
        Empgender=gender;
        DepartId=Id;
    }
    //get info
    int getId(){
        return EmpId;
    }
    string getName(){
        return Empname;
    }
    string getGender(){
        return Empgender;
    }
    int getDepartmentId(){
        return DepartId;
    }
    //print 
    void display(){
        cout<<"ten nhan vien:"<<Empname<<endl<<"so id:"<<EmpId<<endl<<"gioi tinh:"<<Empgender<<endl<<"so dia chi nha:"<<DepartId;
    }
};

class Manager:public Employee{
    public:
     Manager(int empId, string empName, string empGender, int deptId) : Employee(empId, empName, empGender, deptId) {}

};

// class Manager{
//   private:
//   Employee a;
//   public:
//   Manager(int Empid,string Empname,string Empgender,int Departid):a( Empid, Empname, Empgender, Departid){}
//   void display(){
//       a.display();
//   }
// };

int main(){
    Employee emp(123,"tri tran","name",23);
    emp.display();
    Manager mana(123,"tri tran","name",23);
    mana.display();
}