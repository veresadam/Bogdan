///https://leetcode.com/problems/integer-to-roman/description/

char* intToRoman(int num) {
    
    char *result;
    int i = 0;
    int myRemainder;
    
    result = malloc(sizeof(char) * 255);

    if(num > 999) {
        myRemainder = num/1000;
        while (num >= 1000)
            num %= 1000;

        for (i; i < myRemainder; i++){
            result[i] = 'M';
        }
    }
    
    if (num >99) {
        myRemainder = num/100;
        num %= 100;
        if (myRemainder >= 5 && myRemainder < 9){
            result[i++] = 'D';
            while (myRemainder-5 != 0){
                result[i++] = 'C';
                myRemainder--;
            }
        } else if (myRemainder == 4){
            result[i++] = 'C';
            result[i++] = 'D';
        } else if (myRemainder == 9){
            result[i++] = 'C';
            result[i++] = 'M';
        } else {
            while (myRemainder != 0) {
                result[i++] = 'C';
                myRemainder--;
            }
        }
    }
    
    if (num >9) {
        myRemainder = num/10;
        num %= 10;
        if (myRemainder >= 5 && myRemainder < 9){
            result[i++] = 'L';
            while (myRemainder-5 != 0){
                result[i++] = 'X';
                myRemainder--;
            }
        } else if (myRemainder == 4){
            result[i++] = 'X';
            result[i++] = 'L';
        } else if (myRemainder == 9){
            result[i++] = 'X';
            result[i++] = 'C';
        } else {
            while (myRemainder != 0) {
                result[i++] = 'X';
                myRemainder--;
            }
        }
    }
    
    myRemainder = num;
    if (myRemainder != 0) {
        if (myRemainder >= 5 && myRemainder < 9){
            result[i++] = 'V';
            while (myRemainder-5 != 0){
                result[i++] = 'I';
                myRemainder--;
            }
        } else if (myRemainder == 4){
            result[i++] = 'I';
            result[i++] = 'V';
        } else if (myRemainder == 9){
            result[i++] = 'I';
            result[i++] = 'X';
        } else {
            while (myRemainder != 0) {
                result[i++] = 'I';
                myRemainder--;
            }
        }
    }
    
    result[i] = '\0';
    
    return result;
}
