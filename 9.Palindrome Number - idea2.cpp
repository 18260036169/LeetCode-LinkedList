class Solution {
public:
    bool isPalindrome(int x) {
        if ( x < 0 || ( x % 10 == 0 && x != 0 ) ) {
            return false;
        }
            
        // 用一个变量记录x，最后是要拿来比较的
        int copy_x = x;
        // 溢出？用一个long变量解决！反正我是懒得写异常处理了...
        long reverseNumber = 0;
		
		// 	一滴也没有的时候结束循环
        while ( x > 0 ) {
            reverseNumber = reverseNumber * 10 + x % 10;
            x /= 10;
        }

        return copy_x == reverseNumber;
    }
};
