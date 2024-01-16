function plusOne(digits: number[]): number[] {
    const length = digits.length;
    
    for (let i = 1; i <= length; i++) {
        if (digits[length-i] !== 9) {
            digits[length-i] += 1;
            break;
        }
        else {
            digits[length-i] = 0;
        }
    }
    
    if (digits[0] === 0) {
        digits.unshift(1);
    }
    
    return digits;
};