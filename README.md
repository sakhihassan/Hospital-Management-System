# 🏥 Hospital Management System

**A C-Based Console Application for Hospital Administration and Patient
Management**

Developed as a Semester-End Project for **Programming Fundamentals
(CL1002)** at **FAST National University of Computer & Emerging
Sciences, Karachi Campus**.

## 📌 Project Overview

The Hospital Management System is a C-based console application designed
to digitize hospital operations and simplify patient management. It
provides separate portals for administrators, doctors, patients, and
hospital staff, allowing each role to access specific functionalities
through a secure, role-based interface.

The system aims to manage patient records, doctor appointments, medical
histories, hospital beds, and billing through an organized and
centralized application.

## 👥Members

Muhammad Sakhi Hassan(26K-0594)
Syed Abdullah Bin Amir(26K-0600)
Varaa Nawaz Sheikh(26K-0633)

## 🎯 Objectives

-   Digitize hospital administration and patient record management.
-   Implement role-based authentication and access control.
-   Simplify appointment scheduling and prevent booking conflicts.
-   Manage hospital wards and bed availability.
-   Maintain medical histories, prescriptions, and billing records.
-   Use dynamic memory allocation to support expandable records.
-   Store data persistently using binary file handling.

## ✨ Planned Features

### 1. 🔐 Role-Based Authentication

-   Separate login portals for Admin, Doctor, Patient, and Staff.
-   Credential verification.
-   Access to features based on user roles.

### 2. 👨‍💼 Admin Portal

-   Register and manage doctors and staff.
-   View system-wide audit logs.
-   Allocate hospital budgets.
-   Override room and bed allocations.
-   Manage hospital records.

### 3. 🩺 Doctor Portal

-   View assigned patients.
-   Update patient diagnoses.
-   Prescribe medications.
-   Manage daily schedule availability.
-   View patient medical histories.

### 4. 🧑‍⚕️ Patient Portal

-   Book doctor appointments.
-   View personal medical history.
-   Check prescriptions.
-   View itemized bills.

### 5. 🏥 Staff Portal

-   Update ward and bed statuses.
-   Record patient admissions and discharges.
-   Process initial billing entries.
-   Monitor bed availability.

### 6. 📅 Appointment Management

-   Schedule appointments with doctors.
-   Check doctor availability.
-   Detect overlapping appointments using a recursive conflict-checking
    function.
-   Prevent double-booking before confirming appointments.

### 7. 🛏️ Ward and Bed Management

-   Dynamically allocated 2D grid for wards and beds.
-   Track bed statuses:
    -   Available
    -   Occupied
    -   Maintenance
-   Manage patient room allocations.

### 8. 💳 Billing Management

-   Maintain patient billing records.
-   Record initial billing entries.
-   Generate itemized bills for patients.

### 9. 💾 Data Persistence

-   Store patient, doctor, and staff records.
-   Maintain medical histories and user logs.
-   Use binary file handling to preserve data across program executions.

### 10. 📂 Dynamic Memory and Search

-   Use dynamic memory allocation for expandable registries.
-   Manage patient and doctor records using structures and pointers.
-   Search for patients and doctors by name, specialization, or unique
    ID.

## 🛠️ Technologies Used

  Technology               Purpose
  ------------------------ ----------------------------------------------
  C                        Core programming language
  `stdio.h`                Input/output and file handling
  `stdlib.h`               Dynamic memory allocation
  `string.h`               String manipulation and searching
  `time.h`                 Date and time operations
  Structures               Organizing hospital records
  Pointers                 Memory and record management
  Recursion                Appointment conflict checking
  Binary Files             Persistent data storage
  GCC                      C compiler
  VS Code / Code::Blocks   Development environment
  Git & GitHub             Version control and weekly progress tracking

## 🧠 Core Programming Concepts

This project aims to apply the following Programming Fundamentals
concepts:

-   Conditional statements (`if-else`, `switch`)
-   Loops (`for`, `while`, `do-while`)
-   Functions and recursion
-   Arrays and strings
-   Structures and nested structures
-   Pointers and dynamic memory allocation
-   Two-dimensional dynamic arrays
-   File handling (binary files)
-   Searching and record management

## 📁 Project Structure

``` text
Hospital-Management-System/
│
├── main.c
├── README.md
├── .gitignore
│
├── src/
│   ├── authentication.c
│   ├── admin.c
│   ├── doctor.c
│   ├── patient.c
│   ├── staff.c
│   ├── appointments.c
│   ├── ward_management.c
│   └── billing.c
│
├── include/
│   └── hospital.h
│
├── data/
│   └── (Generated binary data files)
│
└── docs/
    └── (Project documentation)
```

*The directory structure is a proposed organization and may change as
development progresses.*

## ⚙️ Installation and Execution

### Prerequisites

-   GCC compiler
-   VS Code or Code::Blocks
-   Git

### Clone the Repository

``` bash
git clone https://github.com/YOUR-USERNAME/Hospital-Management-System.git
```

### Navigate to the Project

``` bash
cd Hospital-Management-System
```

### Compile

For a simple single-file version:

``` bash
gcc main.c -o hospital
```

For a modular version, compile the source files together:

``` bash
gcc main.c src/*.c -Iinclude -o hospital
```

### Run

**Windows:**

``` bash
hospital.exe
```

**Linux:**

``` bash
./hospital
```

*Compilation commands will be updated as the actual project structure is
finalized.*

## 📅 Weekly Development Progress

This project is being developed incrementally throughout the semester.
The following table will be updated every week to reflect actual
progress.

  -----------------------------------------------------------------------
  Week                    Planned Development     Status
  ----------------------- ----------------------- -----------------------
  Week 1                  Project proposal,       🔄 In Progress
                          planning, and GitHub    
                          repository setup        

  Week 2                  Define structures and   ⏳ Pending
                          design the main menu    

  Week 3                  Implement role-based    ⏳ Pending
                          authentication          

  Week 4                  Develop Admin Portal    ⏳ Pending

  Week 5                  Develop Doctor Portal   ⏳ Pending

  Week 6                  Develop Patient Portal  ⏳ Pending

  Week 7                  Develop Staff Portal    ⏳ Pending

  Week 8                  Implement appointment   ⏳ Pending
                          scheduling and conflict 
                          checking                

  Week 9                  Implement ward and bed  ⏳ Pending
                          management              

  Week 10                 Implement billing       ⏳ Pending
                          management              

  Week 11                 Implement dynamic       ⏳ Pending
                          memory allocation and   
                          searching               

  Week 12                 Implement binary file   ⏳ Pending
                          handling                

  Week 13                 Integration and         ⏳ Pending
                          debugging               

  Week 14                 Testing, documentation, ⏳ Pending
                          and final submission    
  -----------------------------------------------------------------------

*These are tentative milestones. Update the weeks and statuses according
to the work actually completed by the team.*

## 📊 Current Project Status

**Development Stage:** Initial Planning

The project proposal defines the system architecture, intended features,
and technologies. Implementation progress will be documented through
regular GitHub commits and weekly updates.

## 👥 Group Members

**FAST-NUCES, Karachi Campus**\
**Programming Fundamentals --- BCS-1C**

  Student ID   Name
  ------------ ------------------------
  26K-0594     Muhammad Sakhi Hassan
  26K-0600     Syed Abdullah Bin Amir
  26K-0633     Varaa Nawaz

## 🔄 GitHub Weekly Updates

The repository will be updated regularly to document the team's
development process.

Each weekly update should include: - Newly implemented features. -
Changes and improvements to existing code. - Bugs fixed and testing
performed. - Updated project documentation. - A meaningful Git commit
describing the changes.

Example commit messages:

``` bash
git add .
git commit -m "Week 1: Initialize project structure"
git push origin main
```

``` bash
git add .
git commit -m "Week 2: Add patient and doctor structures"
git push origin main
```

## 🚀 Future Improvements

Depending on the time available and project requirements, potential
improvements include:

-   Enhanced input validation and error handling.
-   More detailed audit logs.
-   Improved appointment and billing reports.
-   Additional record-searching capabilities.
-   More comprehensive system testing.

## 📜 License

This project is developed for academic purposes as part of the
Programming Fundamentals semester-end project at FAST-NUCES Karachi
Campus.


**Hospital Management System**\
*Programming Fundamentals \| FAST-NUCES Karachi Campus \| BCS-1C*
