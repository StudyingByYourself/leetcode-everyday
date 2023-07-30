#include <stdbool.h>
#include <string.h>

char *convertString(char *str)
{
    int slow = 0;
    int fast = 0;
    while (fast < strlen(str)) {
        if (str[fast] != '#') {
            str[slow++] = str[fast++];
            continue;
        }
        fast++;
        if (slow == 0) {
            continue;
        }
        slow--;
    }
    str[slow] = '\0';
    return str;
}

bool backspaceCompare(char *s, char *t)
{
    s = convertString(s);
    t = convertString(t);
    return strcmp(s, t) == 0;
}
