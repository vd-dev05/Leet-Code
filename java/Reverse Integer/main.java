class Solution {
    public int reverse(int x) {
       return Recursion(x,0);

    }
      private int Recursion(int x , int reversed ) {
        if (x == 0 ) return reversed;

        int digit = x % 10;
        x /= 10;
        if (reversed > Integer.MAX_VALUE / 10 || (reversed == Integer.MAX_VALUE / 10 && digit > 7)) {
            return 0;
        }
        if (reversed < Integer.MIN_VALUE / 10 || (reversed == Integer.MIN_VALUE / 10 && digit < -8)) {
            return 0;
        }
        return Recursion(x, reversed * 10 + digit);
    }
}