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
    string genderDescription;
    switch(gender){
    case 'm':
        genderDescription=" Mężczyzna";
        break;
    case 'w':
        genderDescription=" Kobieta";
        break;
    default:
        genderDescription="-";

    }

    cout << "\n\nImię i nazwisko: " << name << " " << surname <<  "\n" << "Narodowość:" << nationality << ", rok urodzenia: " << yearBirthday << "\nWzrost:" << height << ", płeć:" << genderDescription;
    };


};


int main(int argc, char** argv) {
    setlocale(LC_CTYPE, "Polish");
    Worker pracownik;
    pracownik.name="Jan";
    pracownik.surname="Kowalski";
    pracownik.gender='m';
    pracownik.height=188.6;
    pracownik.nationality="Polak"
    pracownik.showNameSurname();
    pracownik.showAllData();
};


