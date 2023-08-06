#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define HASH_TABLE_LENGTH 26

bool isAnagram(char *s, char *t)
{
    int hashtable[HASH_TABLE_LENGTH] = {0};
    int sLength = strlen(s);
    int tLength = strlen(t);
    int i;
    if (sLength != tLength) {
        return false;
    }
    for (i = 0; i < sLength; i++) {
        hashtable[s[i] - 'a']++;
        hashtable[t[i] - 'a']--;
    }
    for (i = 0; i < HASH_TABLE_LENGTH; i++) {
        if (hashtable[i] != 0) {
            return false;
        }
    }
    return true;
}