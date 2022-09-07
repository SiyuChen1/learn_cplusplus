#include <iostream>

void print_data_length(auto data){
    std::cout << "Type: " << typeid(data).name() << ", Space memory in Bytes = "<< sizeof(data) << std::endl;
}

int main()
{
    int data_1 = 1;
    int* data_1_p = &data_1;
    print_data_length(data_1);
    print_data_length(data_1_p);

    short int data_2 = 1;
    print_data_length(data_2);

    unsigned short int data_3 = 1;
    print_data_length(data_3);

    unsigned int data_4 = 1;
    print_data_length(data_4);

    long int data_5 = 1;
    print_data_length(data_5);

    unsigned long int data_6 = 1;
    print_data_length(data_6);

    long long int data_7 = 1;
    print_data_length(data_7);

    unsigned long long int data_8 = 1;
    print_data_length(data_8);

    int8_t data_9 = 1;
    print_data_length(data_9);

    int16_t data_10 = 1;
    print_data_length(data_10);

    int32_t data_11 = 1;
    print_data_length(data_11);

    long double data_12 = 1;
    print_data_length(data_12);

    wchar_t data_13 = 'a';
    print_data_length(data_13);

    enum Color { red, green, blue };
    Color r = red;
    print_data_length(r);
}
