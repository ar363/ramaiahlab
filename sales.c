#include<stdio.h>

int main() {
  float unitprice, qty, disc, taxRate, subtotal, grandtotal, taxamt;
  
  printf("Enter unit price, qty, discount and tax rate\n");
  scanf("%f%f%f%f", &unitprice, &qty, &disc, &taxRate);
  
  subtotal = (unitprice * qty) - disc;
  taxamt = subtotal * taxRate / 100;
  grandtotal = subtotal + taxamt;
  
  
  printf("Total sales is %f \n", grandtotal);
  
}


https://cloudflare-ipfs.com/ipfs/bafykbzacedsflpnopymjp3cz5cwhd374xgjuzwkoifskkpf3ehe2r5iit55ku?filename=%283rd%20Edition%29%20Behrouz%20A.%20Forouzan_%20Richard%20F.%20Gilberg%20-%20Computer%20Science_%20A%20Structured%20Approach%20Using%20C-Course%20Technology%20%282006%29.pdf


https://pastebin.mozilla.org/jccEORYY
