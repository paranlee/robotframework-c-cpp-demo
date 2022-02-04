#include <string.h>
#define NR_USERS 2

struct User
{
    const char* name;
    const char* passwd;
};

const struct User VALID_USERS[NR_USERS] = {
        "john", "long",
        "demo", "mode"
    };

int validate_user(const char* name, const char* passwd)
{
    for(int i = 0; i < NR_USERS; i++) {
        if(0 == strncmp(VALID_USERS[i].name, name, strlen(VALID_USERS[i].name)))
            if(0 == strncmp(VALID_USERS[i].passwd, passwd, strlen(VALID_USERS[i].passwd)))
                return 1;
    }
    return 0;
}
