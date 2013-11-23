/****************************************************
 * Teht„v„: harjoitus 7
 * Tekij„: Joni Laine
 * PVM: 24.9.2013
 * Kuvaus:
 *		Ohjelma laskee ihannepainosi
 *		pituuden perusteella.
 *
 ****************************************************/



#include <iostream> 
using namespace std; 
int main() 
{ 
 int paino;
 int pituus;
 char kokonimi[30]; 
 char osoite[30]; 

 cout<< "Anna nimi: ";
 cin.get();
 cin.get(kokonimi, 30);
 cout<< "Anna pituutesi: ";
 cin.get();
 cin>>pituus;
 cout<< "Anna osoite: ";
 cin.get();
 cin.get(osoite, 30);
 cout<< "Anna painosi: ";
 cin.get();
 cin>>paino;

 cout<<"Arvoisa "<<kokonimi <<endl;
 cout<<"Osoitteesti on "<<osoite<<endl;
 cout<<"Nykyinen painosi on "<<paino<<endl;
 cout<<"Ihannepainosi "<<pituus-100<<endl;
 cout<<"Erotus "<<paino-(pituus-100)<<endl;


} 