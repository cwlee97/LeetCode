bool isPalindrome(int x) {
    long result = 0;
    long x_cp = x;
    if (x_cp >= 0) {
        if (x_cp == 0) return true;
        else if (x_cp % 10 == 0) return false;
        while (true) {
            result = result * 10 + x_cp % 10;
            
            if (x_cp / 10 < 1) 
                break;
            else 
                x_cp = (int) (x_cp / 10);
        }
        if (result == x) 
            return true;
    }
    return false;
}