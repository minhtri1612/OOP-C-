#include <iostream>
#include <string>
using namespace std;
class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(int day, int month, int year){
        this->day=day;
        this->month=month;
        this->year=year;
    }
    void describe(){
        cout<<"Day:"<<day<<"Month:"<<month<<"year:"<<year;
    }
};
class Book{
    private:
    string name;
    string author;
    Date*publication_date;
    public:
    Book(string name,string author,Date *publication_date):publication_date(publication_date){
        this->name=name;
        this->author=author;
    }
    void describe(){
        cout<<"Book name:"<<name<<"Author name:"<<author;
        publication_date->describe();
    }
};
int main(){
    Date publication_date(27,6,2022);
    Book book("C++","Peter",&publication_date);
    book.describe();
}