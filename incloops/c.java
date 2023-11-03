import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {
        // ...code... lonely here...
        List<Integer> a = new ArrayList<>();
        for (int i = 1000; i <= 9999; i++) {
            if (sanit(i)) {
                if (sumOfDigits(i) == specSub(i))
                {
                    a.add(i);
                }
            }
        }
        
        System.out.println(a);
    }

    static boolean sanit(int num) {
        int l = 0;
        Set<Integer> set = new HashSet<Integer>();
        while (num > 0) {
            int digit = num % 10;
            set.add(digit);
            num = num / 10;
            l++;
        }
        if (l == set.size()) {
            return true;
        }
        return false;
    }

    static int sumOfDigits(int num) {
        int s = 0;
        while (num > 0) {
            s += num % 10;
            num /= 10;
        }
        return s;
    }

    static int specSub(int num) {
        String[] s = Integer.toString(num).split("");
        int ab = Integer.parseInt(s[0]+s[1]);
        int cd = Integer.parseInt(s[2]+s[3]);

        return ab - cd;
    }

}