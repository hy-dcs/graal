int arr[2][3][2] = { { { 1, 9 }, { 2, 8 }, { 3, 7 } }, { { 4, 6 }, { 5, 11 }, { 6, 4 } } };

int main() {
  return arr[0][2][0] + arr[1][1][1] + arr[0][0][0] + arr[0][0][1];
}
