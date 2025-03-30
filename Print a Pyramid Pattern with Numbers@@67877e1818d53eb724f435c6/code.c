 #include <stdio.h>
    int x;    //GLOBAL VARIABLE
    void main()
    {
        m();   //Function call
        printf("%d", x);
    }
    void m()
    {
        x = 4;  // X is updated
    }
