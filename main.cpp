#include<iostream>
#include"nayan.cpp"
#include"saksham.cpp"
int main()
{
    int ichoice;
    cout << "\nWelcome to the Memory Manager.";
    cout << "\n---------------------------------";
    cout << "\nHere are your allocation options:";
    cout << "\n 1. BEST - FIT";
    cout << "\n 2. BUDDY";
    cout << "\nEnter your choice: ";
    cin >> ichoice;
    switch (ichoice)
    {
        case 1:
        {
            int y = api_inclusion();
            break;
        }
        case 2:
        {
            int itotal;
            int ichoice;
            int ireq;
            cout<<"Enter Total Memory Size (in kilobytes): ";
            cin>>itotal;
            Buddy(itotal);
            int x = API_INCLUSION();
            break;
        }
    }
    return 0;
}
