class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double cooking_time = 0;
        double wait_time = 0;
        int num_customers = customers.size();
        for(auto customer : customers){
            if (cooking_time < customer[0]) cooking_time = customer[0];
            
            cooking_time += customer[1];
            wait_time += (cooking_time - customer[0]);
        }
        return wait_time / num_customers;
    }
};