#include "15_35_NewQuery.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream infile("pride-and-prejudice.txt");
    cout<<"Step into NewQuery."<<endl;
    Query q = ( Query("thattt") & Query("youuuu") | Query("howw"));
    
    print(cout, q.eval(TextQuery(infile)))<<endl;
    cout<<q<<endl;
    cout<<"Step out NewQuery."<<endl;
    return 0;
}
