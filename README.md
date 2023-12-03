# Contiguous-List-Imp



# Extended List Operations

This C++ program demonstrates extended list operations using inheritance in the `ExtendedList` class derived from the `ListType` class.

## Description

The program defines two classes:
- `ListType`: A base class that maintains a list with basic operations such as adding to a specific position, deleting from a position, checking for emptiness or fullness, printing the list, and searching for an element.
- `ExtendedList`: Derived from `ListType`, it extends functionality by adding operations to add elements at the first and last positions, add before a specified element, delete the first and last elements, delete a specified element, perform a sorted search, and add elements to a sorted list.

## Usage

To compile and run the code:
1. Ensure you have a C++ compiler installed.
2. Include the necessary header files: `iostream`, `extendedList.h`, and `listType.h`.
3. Compile the code using your C++ compiler.
4. Run the compiled executable.

## Code

### ListType Class

```cpp
#pragma once

using namespace std;

const int SIZE = 100;
class ListType {
    // ... (methods and members described in the code snippet)
};
```

### ExtendedList Class

```cpp
#pragma once
#include"listType.h"
using namespace std;

class ExtendedList : public ListType {
    // ... (methods and members described in the code snippet)
};
```

### Main Function

```cpp
#include<iostream>
#include"extendedList.h"
#include"listType.h"
using namespace std;

int main() {
    // ... (code to perform various operations on the ExtendedList)
    return 0;
}
```

## Instructions

1. The `ListType` class provides basic list operations.
2. The `ExtendedList` class inherits from `ListType` and extends functionality for additional list operations.
3. The `main` function demonstrates the use of `ExtendedList` operations.
4. Modify the operations within the `main` function to suit your requirements.
5. Compile and execute the code to observe the behavior of the extended list operations.

Feel free to explore and modify the code as needed!
```

