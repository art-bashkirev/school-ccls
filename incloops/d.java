import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) {
        // ...code... lonely here...
        List<String> a = new ArrayList<>();
        for (int i = 0; i <= 1000000; i++) {
            String[] s = String.format("%6s", Integer.toString(i)).replace(' ', '0').split("");
            int s1 = Integer.parseInt(s[0]) + Integer.parseInt(s[1]) + Integer.parseInt(s[2]);
            int s2 = Integer.parseInt(s[3]) + Integer.parseInt(s[4]) + Integer.parseInt(s[5]);
            if (s1 == s2)
            {
                a.add(String.format("%6s", Integer.toString(i)).replace(' ', '0'));
            }
        }
        System.out.println(a.size());
    }
}