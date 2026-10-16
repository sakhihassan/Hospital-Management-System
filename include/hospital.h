
#ifndef HOSPITAL_H
#define HOSPITAL_H

struct Patient
{
    int id;
    char name[50];
    int age;
    int doctorId;
};

struct Doctor
{
    int id;
    char name[50];
    char specialization[50];
};

struct Staff
{
    int id;
    char name[50];
    char job[50];
};

struct Appointment
{
    int appointmentId;
    int patientId;
    int doctorId;
    int day;
    int time;
};

struct Billing
{
    int patientId;
    float amount;
};

extern struct Patient patients[50];
extern int patientCount;

#endif
