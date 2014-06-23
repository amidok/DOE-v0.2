#ifndef abiturient_h
#define abiturient_h

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Abiturient
{
private:
	string surname;
	string name;
	string patronymic;
	double certificate;//балл аттестата
	double exam;//балл за экзамены
	double sum;//сумма баллов
public:
	//конструкторы
	Abiturient();
	Abiturient(const Abiturient& s);
	Abiturient(string surname, string name, string patronymic,double sum, double certificate, double exam);
	//Set-ы и get-ы
	string getSurname()const{return surname;}
	string getName()const{return name;}
	string getPatronymic()const{return patronymic;}
	double getCertificate()const{return certificate;}
	double getExam()const{return exam;}
	double getSum()const{return sum;}
	void set(string surname, string name, string patronymic,double sum, double certificate, double exam);
	void setSurname(string surname);
	void setName(string name);
	void setPatronymic(string patronymic);
	void setSum(double sum);
	void setExam(double exam);
	void setCertificate(double certificate);
	//ввод и вывод
	void Print();
	friend istream& operator>> (istream &s, Abiturient &ab);
	friend ostream& operator<< (ostream &out, Abiturient &ab);
	//операторы сравнения
	bool operator== (const Abiturient &b) const;
	bool operator< (const Abiturient &b) const;
};
#endif