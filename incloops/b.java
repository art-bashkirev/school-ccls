import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        // ...code... lonely here...
        List<Integer> a = new ArrayList<>();
        for (int i = 1; i <= 1000; i++) {
            if (check(i)) {
                a.add(i);
            }
        }
        System.out.println(a);
    }
    static boolean check(int num) {
        int square = num * num;
        while (num > 0) {
            if (num % 10 != square % 10)
                return false;
            num = num/10;
            square = square/10;
        }
        return true;
    }
}