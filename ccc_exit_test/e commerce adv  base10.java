function changeAds(base10) {
    // Write your code here
 let ans = 0;

         for (let i = 0; base10 > 0; i++) {

             ans += Math.pow(2, i) * (!(base10 % 2));

             base10 = Math.floor(base10 / 2)

         }

         return ans;
}
