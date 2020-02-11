class Solution {
public:
    bool isPalindrome(int x) {
    	// 负数与非0整数直接排除
        if ( x < 0 || ( x % 10 == 0 && x != 0 ) ) {
            return false;
        }
		
		// 定义一个reverseNumber记录逆转后的后半部分
        int reverseNumber = 0;
        // 当原始数字 / 10 < 反转后数字 * 10时，此时处理了一半的数字
        while ( x > reverseNumber ) {
        	// 上一轮的reverseNumber * 10 + 每一轮摘出的数
        	// 不难发现新摘出的数都在个位上，reverseNumber因为乘了10所以之前的位数都往上提了一位 个->十 十->百 百->千...
        	// 与此同时x /= 10
            reverseNumber = reverseNumber * 10 + x % 10;
            x /= 10;
        }
		// 最终比较x前半部分与reverseNumber是否相等
        return x == reverseNumber || x == reverseNumber / 10;
    }
};
