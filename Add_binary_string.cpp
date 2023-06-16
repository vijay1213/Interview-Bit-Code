string Solution::addBinary(string a, string b) {
      string res;
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        while(i >= 0 || j >= 0){
            int sum = carry;
            if(i >= 0) sum += a[i--] - '0';// adding the number in the string a to the sum
            if(j >= 0) sum += b[j--] - '0';// adding the number in the string b to the sum
            carry = sum > 1 ? 1 : 0; // if sum is greater than the 2 we return 1
            res += to_string(sum % 2); 
        }
        if(carry) res += to_string(carry); // here we add carry to the res 
        reverse(res.begin(), res.end()); // we reverse the binary string
        return res; // finally we return the string
}
