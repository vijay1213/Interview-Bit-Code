bool isShippingPossible(int capacity, int days, vector<int> &A) {
    int ct = 0;  // Counter for the number of shipments made
    int sum = 0; // Sum of weights in the current shipment

    for (int i = 0; i < A.size(); i++) {
        if (A[i] > capacity)
            return false;  // If any item weight exceeds the capacity, it's not possible to ship

        if ((sum + A[i]) <= capacity)
            sum += A[i];  // Add the item weight to the current shipment
        else {
            ct++;        // If adding the item weight exceeds the capacity, increment the shipment counter
            sum = A[i];  // Start a new shipment with the current item weight
        }
    }

    if (sum != 0)
        ct++;  // If there are any remaining items, increment the shipment counter

    if (ct <= days)
        return true;  // If the number of shipments is within the allowed timeframe, shipping is possible

    return false;  // Otherwise, shipping is not possible
}


int Solution::solve(vector<int> &A, int B) {
    int lo = 0;
    int hi = 0;
    for (int i = 0; i<A.size();i++){
        hi+=A[i];
    }
    int mid;

    while (hi - lo >1){
        mid = (hi + lo)/2;
        if (isShippingPossible(mid,B,A)) hi = mid;
        else lo = mid +1;
    }
    if (isShippingPossible(lo,B,A)) return lo;
    else return hi;
}
