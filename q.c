// @todo: Add a file documentation header as explained in the specs ...

// @todo: Add necessary C standard library headers here ...

// You should document [not necessary for grading but an excellent habit
// to acquire] your implementation of function tile to aid
// in debugging and maintenance not only by yourself but by others in
// your software development team ...

// Remember, the function-level documentation header in q.h is primarily
// meant for your clients. The documentation header here is primarily for
// use by you [and other on your team] solely to aid maintenance and
// debugging tasks ...


// @todo: Provide the definition of function tile that
// matches the declaration in q.h ...


// Add documentation [for yourself and not for grading] for function dispense_change ...

// @todo: Provide the definition of function dispense_change that
// matches the declaration in q.h ...


#include <stdio.h>
#include <math.h>
#include "q.h"

void tile(double wl,double tl){

    // declaring variables in the function for wall_lenght, tile_lenght, total_space_left, num_tiles, total_gap as doubles 
    //and assigning values from function into wall_lenght and tile_lenght and initilizing the rest to 0.0
    double wall_lenght = wl , tile_lenght = tl, num_tiles = 0.0, total_gap = 0.0;

    num_tiles =  1 + 2 * floor ((wall_lenght - tile_lenght)/(2 * tile_lenght));                      // calculating num_tiles
    total_gap = (wall_lenght - num_tiles * tile_lenght) / 2;                                         // calculating total_gap 

    printf("Wall length: %.2f | Tile width: %.2f\n", wall_lenght, tile_lenght);                      // printing the given values of wall length and Tile width
    printf("Number of tiles: %.f\n", num_tiles);                                                     // printing total Number of tiles used
    printf("Gap at each end: %.2f\n", total_gap);                                                    // printing Gap at each end 
}

void dispense_change(void){

    int a_1 = 0 ,b_1 = 0, a_2 = 0, b_2 = 0; 

    //printf("enter cost of item and amout given: ");
    scanf(" %d.%d %d.%d", &a_1, &a_2, &b_1, &b_2);                                                   // recieves user input of cost and total amount given

    int cost = a_1 * 100 + a_2;                                                                      // calcculate cost in the form of cents
    int total = b_1 * 100 + b_2;                                                                     // calcculate total in the form of cents

    int change = total - cost;;                                                                       // calcculate change using total and cost 

    int loonie_c = 0, half_loonie_c = 0, quarter_c = 0, dime_c = 0,  nickel_c = 0, pennie_c = 0;      // defining the counters for loonies, half_loonie, quarter, dime, nickel, pennie to count number of eache values defined ;

    while (change != 0){
        if(change >= 100){                                                                           // loonies = 100, line will execute if change in 100 or more
            
            change -=100;
            loonie_c +=1;
        }
        else if(change >= 50){                                                                      // half_loonies = 50 line will execute if change in 50 or more

            change -=50;
            half_loonie_c +=1;
        }
        else if(change >= 25){                                                                      // quarters = 25 line will execute if change in 25 or more

            change -=25;
            quarter_c +=1;
        }
        else if(change >= 10){                                                                      // dimes = 10 line will execute if change in 10 or more

            change -=10;
            dime_c +=1;
        }
        else if(change >= 5){                                                                      // nickels = 5 line will execute if change in 5 or more

            change -=5;
            nickel_c +=1;
        }
        else if(change >= 1){                                                                     // pennies = 1 linee will execute if change in 1 or more

            change -=1;
            pennie_c +=1;
        }
        else{
            printf("\n\nerror\n\n");                                                              // prints error if there is a unknown value
            break;
        }
    }
    // printing the output of the counted loonies, half-loonies, quarters, dimes, nickels, pennies
    printf("%d loonies + %d half-loonies + %d quarters + %d dimes + %d nickels + %d pennies\n", loonie_c, half_loonie_c, quarter_c, dime_c, nickel_c, pennie_c); 


}
