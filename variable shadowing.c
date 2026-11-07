int a = 10;       // Global a

int main()
{
    int a = 20;   // Local a

    {
        int a = 30;   // Inner-block a
        printf("%d ", a);
    }

    printf("%d", a);
    return 0;
}
//Correct output: 30 20
//inner variables can shadow outer variables, but they don't change the outer variable.
\*An inner variable can have the same name as an outer variable.

The inner variable shadows the outer variable within its scope.

Shadowing does not modify the outer variable.

Once the inner block ends, the outer variable becomes accessible again.

A local variable generally takes precedence over a global variable with the same name.
Scope = Region where a variable can be accessed.

Shadowing = Inner variable hides an outer variable with the same name.

Inner block ends = Inner variable goes out of scope.

Shadowing does not change the outer variable.

Key takeaway: Always identify the nearest enclosing declaration when tracing a variable reference.*/
