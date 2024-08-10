#include <iostream>
#include <string>
using namespace std;
class Book{
    public:
    string Title;
    string Author;
    float* Rates;
    int RatesCounter;
    Book(string Title,string Author){
        this->Title=Title;
        this->Author=Author;
        RatesCounter=2;
        Rates =new float[RatesCounter];
        Rates[0]=5;
        Rates[1]=4;
    }
    ~Book(){
        delete[]Rates;
        Rates=NULL;
    }
    Book(const Book &original){
        Title=original.Title;
        Author=original.Author;
        Rates=original.Rates;
        RatesCounter=original.RatesCounter;
        Rates= new float[RatesCounter];
        for(int i=0;i<RatesCounter;i++){
            Rates[i]=original.Rates[i];
        }
    }
};

void printBook(Book book){
    cout<<"Title:"<<book.Title<<endl;
    cout<<"Author:"<<book.Author<<endl;
    float sum=0;
    for(int i=0;i<book.RatesCounter;i++){
            sum+=book.Rates[i];
    }
    cout<<"average:"<<sum/book.RatesCounter<<endl;
}
int main(){
    Book book1("Hello minh tri","tri tran");
    Book book2("Hello ca nha","tri minh");
    Book book3(book1);
    printBook(book1);
    printBook(book2);
    printBook(book3);

}