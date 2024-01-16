function addBinary(a: string, b: string): string {
    const arrA = a.split("");
    const arrB = b.split("");
    
    var idxA = arrA.length-1;
    var idxB = arrB.length-1;
    var temp = 0;
    
    var res = "";
    
    while (idxA >= 0 || idxB >= 0 || temp > 0) {
        const sum = (Number(arrA[idxA]) || 0) + (Number(arrB[idxB]) || 0) + temp;
        res = (sum % 2).toString() + res;
        temp = Math.floor(sum / 2);
        
        idxA--;
        idxB--;
    }
    
    return res;
};