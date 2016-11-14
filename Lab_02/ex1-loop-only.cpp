#define WIDTH 5
#define HEIGHT 3

int main () {
  int jimmy [HEIGHT][WIDTH];
  for (int n=0; n<HEIGHT; n++) {
    for (int m=0; m<WIDTH; m++) {
      jimmy[n][m]=(n+1)*(m+1);
    }
  }

  // Do something with Jimmy

}
