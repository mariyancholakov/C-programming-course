#ifndef SAFEINT_H_
#define SAFEINT_H_

struct SafeResult
{
    int value;
    int errorflag;
};

struct SafeResult safeadd(int first_num, int second_num);
struct SafeResult safesubtract(int first_num, int second_num);
struct SafeResult safemultiply(int first_num, int second_num);
struct SafeResult safedivide(int first_num, int second_num);
struct SafeResult safestrtoint(char string[]);

#endif