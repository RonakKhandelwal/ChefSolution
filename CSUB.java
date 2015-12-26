import java.io.BufferedReader;
import java.io.InputStreamReader;

/**
 * Created by ronak on 26/12/15.
 */
public class CSUB {
    public static void main(String[] args) throws Exception {
        int test = 0;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        test = Integer.parseInt(br.readLine());
        while (test > 0) {
            br.readLine();
            String ca = br.readLine();
            int no1 = 0;
            for (int i = 0; i < ca.length(); i++) {
                if (ca.charAt(i) == '1')
                    no1++;
            }
            long ans = (long) no1 * (no1 + 1) / 2;
            System.out.println(ans);
            test--;
        }

    }
}
