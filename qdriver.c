#include <stdio.h>
#include "q.h"

// see file tile.txt for the correct text to be printed
// by your implementation of function tile for these unit tests ...

// see file change.txt for the correct text to be printed
// by your implementation of function dispense_change for these unit tests ...

// see output.txt for the correct output generated by ALL the unit tests ...
int main(void) {
  // Unit tests for function tile ...
  tile(100, 5.0);
  tile(34.5, 6);
  tile(78.9, 10.11);

  // Unit tests for function dispense_change ...
  dispense_change();
  dispense_change();
  dispense_change();

  return 0;
}
