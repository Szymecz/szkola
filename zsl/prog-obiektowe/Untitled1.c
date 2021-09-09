#include <iostream>
using namespace std;



class Worker{
public:
        string name;
        string surname;
        string nationality;
        unsigned short int  yearBirthday;
        float height;
        char gender;

    void showNameSurname(){
cout << "Imię i nazwisko: "<< name << " " << surname;
};

void showAllData(){
    cout << "\n\nImię i nazwisko: " << name << " " << surname <<  "\n" << "Narodowość:" << nationality << ", rok urodzenia: " << yearBirthday << "\nWzrost:" << height << ", płeć:" << gender;
    };


};


int main(int argc, char** argv) {
    setlocale(LC_CTYPE, "Polish");
    Worker pracownik;
    pracownik.name="Jan";
    pracownik.surname="Kowalski";
    cout << pracownik.name << endl << endl;
    pracownik.showNameSurname();
    pracownik.showAllData();
};


