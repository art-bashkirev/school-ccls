import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {
        // ...code... lonely here...
        List<Integer> prime = new ArrayList<>();
        System.out.println((2*1)-1);
        for (int i = 2; i < 50; i++) {
            if (isPrime(i)) {
                System.out.println((2*i)-1);
            }
        }
    }

    static boolean isPrime(int num) {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}