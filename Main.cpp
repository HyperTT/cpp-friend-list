#include <iostream>
using namespace std;

int main ()
{
    int name_count = 5;
    int name_fave;
    string names[5];
    cout << "Enter five names\n";
    for (int outer = 0; outer < name_count; outer++)
    {
        cout << "Enter friend " << outer + 1<<endl;
        cin >> names[outer];
    }
    cout << "Here are all of those names\n";
    for (int inner = 0; inner < name_count; inner++)
    {
        cout << "Friend "<<inner +1<< " is "<<names[inner]<<endl;
    }
    cout << "Which friend is your best friend? (Enter an integer)\n";
    cin >> name_fave;
    name_fave -= 1;
    if (name_fave <= -1 || name_fave >= 5)
    {
        return 0;
    }
    cout <<names[name_fave]<<"? Yes, "<<names[name_fave]<<" is awesome\n";
    return 0;
}
