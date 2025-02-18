std::vector<int> vec = {1, 2, 3};
for (int i = 0; i < vec.size(); ++i) { // Corrected: Loop condition changed to i < vec.size()
    std::cout << vec[i] << " ";
}
std::cout << std::endl;

int arr[5] = {1, 2, 3, 4, 5};
//int* ptr = arr + 5; // Corrected: Avoid pointing beyond array

//To access elements safely, use array indexing or iterators.
for(int i=0; i<5; ++i){
    std::cout<<arr[i] << " ";
}
std::cout << std::endl;