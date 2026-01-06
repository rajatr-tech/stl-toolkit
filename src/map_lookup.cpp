#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> student_marks;
    student_marks["Ram"]=90;
    student_marks["Sham"]=85;
    student_marks["Rahul"]=89;

    cout<<"Students and marks";
    for(auto &p:student_marks)
    {
        cout<<p.first<<"->"<<p.second<<endl;
    }

    string name = "Ram";
    auto it = student_marks.find(name);

    if (it != student_marks.end()) {
        cout << "\nFound " << name << " with marks: " << it->second << endl;
    } else {
        cout << "\nStudent not found\n";
    }


    return 0;
}