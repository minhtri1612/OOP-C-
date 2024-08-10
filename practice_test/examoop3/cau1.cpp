#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Media{
    public:
    virtual void describe()=0;
};
class Book: public Media {
    private:
    string name;
    int price;
    public:
    Book(string name,int price){
        this->name=name;
        this->price=price;
    }
    void describe(){
        cout<<"gia tien:"<<price<<" "<<"ten sach:"<<name<<endl;
    }
};
class CD: public Media {
    private:
    int id;
    int price;
    public:
    CD(int id,int price){
        this->id=id;
        this->price=price;
    }
    void describe(){
        cout<<"ID:"<<id<<" "<<"Price:"<<price;
    }
};
class Library{
    private:
    string name;
    vector<Media*>truyenthong;
    public:
    Library(string name){
        this->name=name;
    }
    void  addMedia(Media* media){
        truyenthong.push_back(media);
    }
    void describe() const{
        cout<<"Library name:"<<name<<endl;
        for (const auto& media : truyenthong) {
            media->describe();
        }
    }
};

int main(){
    Book book1("C++",20);
    book1.describe();
    Book book2("C#",21);
    book2.describe();
    CD cd1(12345,5);
    cd1.describe();
    Library library("phan huy ich"); 
    library.addMedia(&book1);
    library.addMedia(&book2);
    library.addMedia(&cd1);
    library.describe();
}
