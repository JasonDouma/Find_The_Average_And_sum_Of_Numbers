#include <iostream>

int main()
{
    int num;
    int n;
    double total;
    char choice='n';

    do
    {
        total = 0;

        do
        {
            std::cout << "How many numbers would you like to enter?" << std::endl;
            std::cin>>num;
        }
        while (num<1 || num >10);

        for (int i=0; i<num; i++)
        {
            std::cout<<"Enter number"<<i+1 << " ";

            std::cin>>n;
            total = total +n;
        }
        std::cout<<"The total of the numbers is "<<total;
        std::cout<<" and the average is "<<total/num << " " << std::endl;
        std::cout<<"Do you want to calculate another average?(y/n)";
        std::cin>>choice;

    }
    while (choice == 'y' || choice =='Y');

    return 0;

}
