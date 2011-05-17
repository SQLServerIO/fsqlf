#ifndef global_variables_h
#define global_variables_h

int currindent=0;
int left_p  = 0;
int right_p = 0;
int subselect_level = 0;

#define STATE_STACK_SIZE (100)
int state_stack[STATE_STACK_SIZE];
int state_stack_index;

void init_stack()
{

    state_stack_index = 0;
}

void push_stack(int item)
{   if(state_stack_index < 0 || state_stack_index >= STATE_STACK_SIZE) printf("ERORR: push_stack() - bounds");
    state_stack[state_stack_index] = item;
    state_stack_index++;
}

int pop_stack()
{   if(state_stack_index <= 0 || state_stack_index >= STATE_STACK_SIZE) printf("ERORR: pop_stack() - bounds");
    --state_stack_index;
    return state_stack[state_stack_index];
}

int peek_stack()
{   if(state_stack_index <= 0 || state_stack_index >= STATE_STACK_SIZE) printf("ERORR: peek_stack() - bounds");
    return state_stack[state_stack_index-1];
}





#endif