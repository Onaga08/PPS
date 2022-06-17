int main() {
    char s;
    int total, bus =20, car = 10, bike = 5, hours;
    printf("Enter Vehicle Code:");
    scanf("%s", &s);
    printf("\nEnter No. of hours parked:");
    scanf("%d", &hours);
    switch (s) {
    case 'c':
    total = car*hours;
    printf("Total parking fees is %d", total);
    break;
    case 'b':
    total = bus*hours;
    printf("Total parking fees is %d", total);
    break;
    case 't':
    total = bike*hours;
    printf("Total parking fees is %d", total);
    break;
    default:
    printf("Invalid Input");
    break;}
    return 0;
}
