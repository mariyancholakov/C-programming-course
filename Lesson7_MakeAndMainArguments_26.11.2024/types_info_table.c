#include <stdio.h>
#include <limits.h>

#define PRINT_TYPES(TYPE, FORMAT_SIGNED, MIN, MAX, UNSIGNED_FORMAT, UMAX) \
    printf("%-10s | %-10s | %-8zu | %-15d | %-15d | %-14s | %-15u |\n",   \
           #TYPE, FORMAT_SIGNED, sizeof(TYPE), MAX, MIN, UNSIGNED_FORMAT, UMAX)
int main()
{

    printf("%-10s | %-9s | %-8s | %-15s | %-15s | %-8s | %-15s |\n", "Type", "Format", "Bytes", "Min_Signed", "Max_Signed", "UnsignedFormat", "Max_Unsigned");
    printf("-------------------------------------------------------------------------------------------------------\n");

    PRINT_TYPES(short, "%hd", SHRT_MIN, SHRT_MAX, "%hu", USHRT_MAX);
    PRINT_TYPES(int, "%d", INT_MIN, INT_MAX, "%u", UINT_MAX);
    PRINT_TYPES(long, "%ld", LONG_MIN, LONG_MAX, "%lu", ULONG_MAX);
    PRINT_TYPES(long long, "%lld", LLONG_MIN, LLONG_MAX, "%llu", ULLONG_MAX);
    PRINT_TYPES(char, "%d", CHAR_MIN, CHAR_MAX, "%u", UCHAR_MAX);

    return 0;
}