//Kahrin Huggins 
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

//creates stack structure
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};

//initializes stack structure size
struct Stack* createStack(unsigned capacity){ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 

//full stack = last index
int isFull(struct Stack* stack) { 
    return stack->top == stack->capacity - 1; 
} 

// empty stack = -1
int isEmpty(struct Stack* stack) { 
    return stack->top == -1; 
} 

//creates push function
void push(struct Stack* stack, int item) { 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
 
} 

//creates pop function
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
  


int main() {
    
}

void func1 {
    //statically defined array
    string cars[] = {"Volvo", "BMW", "Ford", "Toyota", "Hyundai","Nissan", "Mercedes-Benz", "Tesla", "Porsche", "Jeep"}; 
 for(k = 0; k < 10; k++)
      printf("%c \n ", cars[k]);

    return 0;
    
}

void func2 {
    struct Stack* stack = createStack(20);
    
    push(stack, "Snickerdoodle");
    push(stack, "Chocolate Chip");
    push(stack, "Oatmeal Raisin");
    push(stack,"Peanut butter");
    push(stack, "Coconut");
    push(stack, "Double Chocolate");
    
    printf("%c popped from the stack \n", pop(stack));
    return 0;
    
}
