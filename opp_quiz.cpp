#include<iostream>
#include<string>
using namespace std;
class Library{
	protected:
		string title;
		string author;
		int id;
		
	public:
		Library(string title,string author,int id){
			this->title=title;
			this->author=author;
			this->id=id;
		
		}
	virtual void display(){
		cout<<"Title of book: "<<title<<endl;
		cout<<"Author of book: "<<title<<endl;		
		cout<<"ID: "<<title<<endl;
		
	}
	
};
class Book : public Library{
	private :
		int number_pages;
		string genre;
		
	public:
		Book(string title ,string author , int id,int number_pages,string genre)
		: Library (title,author,id){
			this->number_pages=number_pages;
			this->genre=genre;
		}
	void display()override{
		cout<<"Title of book: "<<title<<endl;
		cout<<"Author of book: "<<author<<endl;		
		cout<<"ID: "<<id<<endl;
		cout<<"Number of pages: "<<number_pages<<endl;
		cout<<"Genre of that book: "<<genre<<endl;
		
	}
		
};
class Magzine : public Library{
	private :
		int issue_number;
		string month;
		
	public:
		Magzine(string title ,string author , int id,int issue_number,string month)
		: Library (title,author,id){
			this->issue_number=issue_number;
			this->month=month;
		}
	void display()override{
		cout<<"Title of book: "<<title<<endl;
		cout<<"Author of book: "<<author<<endl;		
		cout<<"ID: "<<id<<endl;
		cout<<"Issue Number: "<<issue_number<<endl;
		cout<<"Month in which  book released: "<<month<<endl;
		
	}
		
};
class Audio_Book : public Library{
	private :
		int duration;
		string narrator;
		
	public:
		Audio_Book(string title ,string author , int id,int duration,string narrator)
		: Library (title,author,id){
			this->duration=duration;
			this->narrator=narrator;
		}
	void display()override{
		cout<<"Title of book: "<<title<<endl;
		cout<<"Author of book: "<<author<<endl;		
		cout<<"ID: "<<id<<endl;
		cout<<"Duration: "<<duration<<endl;
		cout<<"Narrator name: "<<narrator<<endl;
		
	}
		
};
int main(){
	Book b1("Basic of OOPS","AMNA",101,1000,"Learning Book");
	
	Book b2("Alchemist","Pualo ",102,500,"Fantasy");
	Magzine m1("DLD","Sara",107,234,"July");
	Magzine m2("Knowledege","Aina",105,236,"June");
	Audio_Book a1("Sound","Ali",104,23,"Aila");
	b1.display();
	b2.display();
	m1.display();
	m2.display();
	a1.display();
	return 0;
}
