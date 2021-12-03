#include <iostream>
using namespace std;

class Reference {

  public:
//constructors/destructors
    Reference();
    Reference(const Reference&);
    ~Reference();

//Other functions
    virtual void printReference();
  
//Accessing functions
    int getId() const;
    void setId(int);

    string getTitle() const;
    void setTitle(string);

    string getAuthor() const;
    void setAuthor(string);

    int getYear() const;
    void setYear(int);

  protected:
    int id;
    string title;
    string author;
    int pubyear;

};
