#include <iostream>

const int len = 1000000;



int main()

{

    int arr[1000000] = {0};



    for (int i = 2; i < 1000000; i++)

    {

        for (int j = i * i; j < 1000000; j+=i)

        {

            arr[j - 1] = 1;

        }

    }

    int count=0;

    for (int i = 1; i < 1000000; i++)

    {

        if (arr[i - 1] == 0){
            count++;
            std::cout << i << std::endl;
        }
    }

    std::cout<<count;

}
