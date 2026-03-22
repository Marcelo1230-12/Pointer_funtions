# Pointer_funtions
this is how pointer can be use in Pointers

Pointers used in a Funtion

we can take a pointer as a regualar pointer but also we can use it for be used as a parameter in any funtion.
ex//

        #include <stdio.h>
        void square(int* number){
        int numtiplication = *number * *number;
         *number=numtiplication;
        }
        int main (){
        
        int number =3;
        numtiplication(&number);
        printf("the square is:%d",number);
        return 0;
        }
the output is 9.

its possible to return a pointer in a funtion lets take as a example the coode above, but just making some little changes

    #include <stdio.h>
    int square(int* number){
    int* numtiplication = *number * *number;
     *number=numtiplication;
    return number;//this return statement is giving a address of the answer not the value
    }
// don't forget to add the *(asterisk) showing that is a pointer funtion.

        int main (){
        
        int number =3;
        numtiplication(&number);
        int* result= square(&number);
        printf("the square is:%d",*result); //note that we use to * in the assigment value result that bc the result is a pointer and not a regular int-value
        return 0;
        }
the out put is 9.
