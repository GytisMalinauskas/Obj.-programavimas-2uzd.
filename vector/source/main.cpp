#include "../headers/main.h"
int main() 
{
    std::cout << "All constructor tests passed!" << std::endl;
  try{
  auto start=chrono::high_resolution_clock::now();
  srand(time(0));
  string duomPav;
  vector <studentas> s; //studentai
  vector <studentas> k; //kieti s
  vector <studentas> l; //lievi s
  
  srand(time(nullptr));

        //test
        //zmogus zm;
        studentas studentas1("Gytis", "Malinauskas");
        studentas studentas2("Vardas", "Pavardaitis");
        studentas2.setND(10);
        studentas2.setEgz(5);
        studentas2.setMed(9);
        cout << studentas1 << endl;
        cout << studentas2 << endl;
        studentas studentas3(studentas1);
        cout << studentas3 << endl;
        studentas studentas4(std::move(studentas2));
        cout << studentas4 << endl;
        studentas studentas5;
        studentas5 = studentas1;
        studentas studentas6;
        studentas6 = std::move(studentas4);
        ofstream output("test.txt");
        output << studentas1 << endl;
        output << studentas2 << endl;
        output << studentas3 << endl;
        output << studentas4 << endl;
        output << studentas5 << endl;
        output << studentas6 << endl;
        output.close();

  while (true)
  {
  cout<<"Enter number"<<endl; 
  cout<<"1 - manual input"<<endl;
  cout<<"2 - generate grades"<<endl;
  cout<<"3 - generate names and grades"<<endl;
  cout<<"4 - reading from file"<<endl;
  cout<<"5 - generate file"<<endl;
  cout<<"6 - quit / show results"<<endl;
  cout<<"Number: ";
  try{
  skaicius=intIvestis(1,6);}
  catch(const exception &e)
  {cerr<<"Klaida: "<<e.what()<<endl;
  continue;}
  cout<<endl;
  if(skaicius==6)
  {break;}
  if(skaicius==3)
  {
    VarduGeneravimui();
  }
  if(skaicius!=4 && skaicius!=5){
  cout<<"Enter number"<<endl;
  cout<<"1 - n and m is given"<<endl;
  cout<<"2 - n and m is not given"<<endl;
  cout<<"Number: ";
 
  number1=intIvestis(1,2);
  cout<<endl;
  if(number1==1){
  cout<<"Enter the number of students: "; m=intIvestis2();
  cout<<"Enter the number of homework: "; n=intIvestis2();
  }
      studentas st;
      if(number1==1){
      for(int i=0; i<m; i++){
      cin>>st;
      s.push_back(std::move(st));}
      }
      if(number1==2){
      while(true){
      cin>>st;
      if(st.getName()=="quit")
      {break;}
      s.push_back(std::move(st));}
      }
      names.clear();
      surnames.clear();
      cout<<endl;
  }
  if(skaicius==4)
  {
    FailoSkaitymas(s,duomPav);
      }
  if(skaicius == 5){
            int kiekis;
            int nd_kiekis;
            string fileName;
            cout << "How many students you want to generate in file?: "<<endl
                 << "Number: ";
            kiekis=intIvestis2();
            cout<<endl;
            cout << "How many tasks should students have (final counts in)?: "<<endl
                 <<"Number: "; 
                 nd_kiekis=intIvestis2();
            cout<<endl;
            auto start_generate=chrono::high_resolution_clock::now();
            GenerateFile(kiekis, nd_kiekis,fileName);
            auto end_generate=chrono::high_resolution_clock::now();
            auto duration_generate= chrono::duration_cast<chrono::milliseconds>(end_generate-start_generate).count();  
            cout << "Failo " << fileName << " generavimas uztruko: " << duration_generate/1000.0 << " sekundes" << endl;
        }
    }
    Isvedimas(s,l,k);
    auto end =chrono::high_resolution_clock::now();
    auto duration_start_to_end= chrono::duration_cast<chrono::milliseconds>(end-start).count();
    cout << "Visos programos veikimas uztruko: " << duration_start_to_end/1000.0 << " sekundes" << endl;
    return 0;
  }
  catch(const exception& e){
                cerr << "Klaida: " << e.what() << endl;
                return 1;
            }
  
}