///https://leetcode.com/problems/string-to-integer-atoi/description/#_=_

int myAtoi(char *str) {
        if (str == "") {
            return 0;
        }
        
        int i = 0;
        int neg = 0;
        int result = 0;
        
        while (str[i] == ' ')
            i++;
        
        
        if (str[i] == '-') {
            neg = 1;
            i++;
        }
    
        while (str[i] >= '0' && str[i] <= '9') {
            i++;
        }
        
        while (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
            i++;
        }
        
        if (neg == 1)
            result *= -1;
        
        return result;
    }
