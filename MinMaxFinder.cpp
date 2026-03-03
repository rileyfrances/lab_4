#include <iostream>

void findMinAndMax (const int arr[],int size, int* min, int* max){
    for (int i=1; i<size; i++){
        if (arr[i]< *min){
            *min=arr[i];
    }
        if (arr[i]> *max) {
            *max=arr[i];
        }
    }
}
int main(){
    int numbers[]={23, 5, 67, -2, 45, 87, 1, 99, 34, -10};
    int size=10;
    int min=numbers[0];
    int max=numbers[0];

    findMinAndMax(numbers, size, &min, &max);
    std::cout<<"The minimum value is: "<<min<<std::endl;
    std::cout<<"the maximum value is: "<<max<<std::endl;

    return 0;
}