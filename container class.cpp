//container class-contains the object of another class
#include<iostream>
#include<list>
#include<iterator>
using namespace std;
//function for printing the elements of a list(showlist)
void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it=g.begin();it!=g.end();++it)
    cout<<"\t"<<*it;  //it is an object of iterator(predefined) and points to a particular point in a list,that is why we use *it to print the list
    cout<<"\n";
}
int main()
{
    list <int> gqlist1,gqlist2;
    //list <student> gqlist1,gqlist2;
    for(int i=0;i<10;++i)
    {
        gqlist1.push_back(i*2);  //push_back is predefined in the list header file and imported
        gqlist2.push_front(i*3); //push_front is predefined in the list header file and imported
    }
    cout<<"List 1 (gqlist1) is: ";
    showlist(gqlist1);
    cout<<"\nList 2 (gqlist2) is: ";
    showlist(gqlist2);
    cout<<"\ngqlist1.front() : "<<gqlist1.front();
    cout<<"\ngqlist1.back() : "<<gqlist1.back();
    cout<<"\ngqlist1.pop_front() : ";
    gqlist1.pop_front();
    showlist(gqlist1);
    cout<<"\ngqlist1.pop_back() : ";
    gqlist1.pop_back();
    showlist(gqlist2);
    cout << "\ngqlist1.reverse() : ";
    gqlist1.reverse();
    showlist(gqlist1);
    cout<<"\ngqlist2.sort() : ";
    gqlist2.sort();
    showlist(gqlist2);
    return 0;
}
