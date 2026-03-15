#include <iostream>
void getScores(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter score " << (i + 1) << ": "<<std::endl;
        std::cin >> arr[i];

        while (arr[i] < 0) {
            std::cout << "Score cannot be negative. Enter again: "<<std::endl;
            std::cin >> arr[i];
        }
    }
}
void sortScores(double* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
double calculateAverage(const double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum/size;
}


int main() {
    int size;

    std::cout << "How many test scores would you like to enter? "<<std::endl;
    std::cin >> size;

    if (size <= 0) {
        std::cout << "Invalid number of scores." << std::endl;
        return 0;
    }

    double* scores = new double[size];

   
    getScores(scores, size);
    sortScores(scores, size);

    double average = calculateAverage(scores, size);

    std::cout << "The sorted scores are: ";
    for (int i = 0; i < size; i++) {
    std::cout << scores[i] << " "<<std::endl;
    }
    

    std::cout << "The average score is: " << average <<std::endl;
    delete[] scores;
    scores=nullptr;


    return 0;

}