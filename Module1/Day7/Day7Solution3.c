#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100


struct LogEntry {
    int entryNo;
    char sensorNo[3];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

int LogEntries(const char* filename, struct LogEntry* logEntries) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        return 0;
    }

    // Ignore the header line
    char line[100];
    fgets(line, sizeof(line), file);

    int Count = 0;
    while (fgets(line, sizeof(line), file) != NULL && Count < MAX_ENTRIES) {
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,\n]", &logEntries[Count].entryNo, 
                                                logEntries[Count].sensorNo,
                                                &logEntries[Count].temperature,
                                                &logEntries[Count].humidity,
                                                &logEntries[Count].light,
                                                logEntries[Count].time);
        Count++;
    }

    fclose(file);
    return Count;
}

// Function to display log entries
void displayLogEntries(const struct LogEntry* logEntries, int entryCount) {
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    for (int i = 0; i < entryCount; i++) {
        printf("%d\t%s\t\t%.1f\t\t%d\t\t%d\t%s\n", logEntries[i].entryNo,
                                                   logEntries[i].sensorNo,
                                                   logEntries[i].temperature,
                                                   logEntries[i].humidity,
                                                   logEntries[i].light,
                                                   logEntries[i].time);
    }
}

int main() {
    const char* filename = "data.csv";
    struct LogEntry logEntries[MAX_ENTRIES];
    int entryCount = LogEntries(filename, logEntries);
    displayLogEntries(logEntries, entryCount);

    return 0;
}

