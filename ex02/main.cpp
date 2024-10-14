# include "Array.hpp"

int main() {
    try {
        std::cout << "Testing int Array:" << std::endl;
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 5;
        }

        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "\nTesting double Array:" << std::endl;
        Array<double> doubleArray(5);
        doubleArray[0] = 1.1;
        doubleArray[1] = 2.2;
        doubleArray[2] = 3.3;
		doubleArray[3] = 4.4;
		doubleArray[4] = 5.5;

        for (unsigned int i = 0; i < doubleArray.size(); i++) {
            std::cout << doubleArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "\nTesting std::string Array:" << std::endl;
        Array<std::string> stringArray(4);
        stringArray[0] = "CPP07";
        stringArray[1] = "ex02";
        stringArray[2] = "is";
        stringArray[3] = "done!";

        for (unsigned int i = 0; i < stringArray.size(); i++) {
            std::cout << stringArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "\nTesting Copy Constructor and Assignment Operator:" << std::endl;
        Array<int> copyArray(intArray);
        Array<int> assignedArray = intArray;
        // change original array, copy&assignment arrays don't get affected
        intArray[0] = 100;

        std::cout << "Original Array (modified): ";
        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << intArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Copy Array: ";
        for (unsigned int i = 0; i < copyArray.size(); i++) {
            std::cout << copyArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "Assigned Array: ";
        for (unsigned int i = 0; i < assignedArray.size(); i++) {
            std::cout << assignedArray[i] << " ";
        }
        std::cout << std::endl;

        std::cout << "\nTesting Out of Bounds Access:" << std::endl;
        std::cout << intArray[10] << std::endl;

    } catch (const std::out_of_range& e) {
        std::cerr << "Out of bounds exception: " << e.what() << std::endl;
    } catch (const std::bad_alloc& e) {
        std::cerr << "Memory allocation failed: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "An unknown exception occurred." << std::endl;
    }

    return 0;
}