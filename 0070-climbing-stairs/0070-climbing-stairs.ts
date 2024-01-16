function climbStairs(n: number, memo: Record<number, number> = {}): number {
    if (n === 1)
        return 1;
    if (n === 2) 
        return 2;
    
    if (memo[n]) {
        return memo[n];
    }
    
    memo[n] = climbStairs(n - 1, memo) + climbStairs(n - 2, memo);
    return memo[n];
};