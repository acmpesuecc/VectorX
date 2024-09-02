#include <stdio.h>
#include <time.h>
#include <unistd.h>
time_t start;

void start_timer(){
    start = time(NULL);
}

float get_elapsed_time(){
    time_t end = time(NULL);
    return difftime(end, start);
}

int main() {
    start_timer();
    sleep(2);
    float elapsed = get_elapsed_time();
    printf("Elapsed time: %.2f seconds\n", elapsed);
    return 0;
}
