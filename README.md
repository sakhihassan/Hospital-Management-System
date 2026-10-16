# 🏥 Hospital Management System

### A C-Based Console Application for Hospital Administration and Patient Management

Developed as a Semester-End Project for **Programming Fundamentals (CL1002)** at FAST National University of Computer & Emerging Sciences, Karachi Campus.

---

## 📌 Project Overview

The Hospital Management System is a C-based console application designed to simplify hospital administration and patient management. It provides separate portals for administrators, doctors, patients, and hospital staff, allowing each role to access specific functionalities through a role-based interface.

The system aims to manage patient records, doctor appointments, medical histories, hospital beds, and billing through an organized console application.

## 👥 Group Members

1. **Muhammad Sakhi Hassan** — 26K-0594
2. **Syed Abdullah Bin Amir** — 26K-0600

## 🎯 Objectives

- Digitize hospital administration and patient record management.
- Implement role-based authentication and access control.
- Simplify appointment scheduling and prevent booking conflicts.
- Manage hospital wards and bed availability.
- Maintain medical histories, prescriptions, and billing records.
- Use dynamic memory allocation for expandable records.
- Store data persistently using binary file handling.

## ✨ Planned Features

### 1. 🔐 Role-Based Authentication
- Separate login access for Admin, Doctor, Patient, and Staff.
- Username and password verification.
- Access to features based on user roles.

### 2. 👨‍💼 Admin Portal
- Register and manage doctors and staff.
- View system-wide audit logs.
- Allocate hospital budgets.
- Manage hospital records.
- Override room and bed allocations.

### 3. 🩺 Doctor Portal
- View assigned patients.
- Update patient diagnoses.
- Prescribe medications.
- Manage daily schedule availability.
- View patient medical histories.

### 4. 🧑‍⚕️ Patient Portal
- Book doctor appointments.
- View personal medical history.
- Check prescriptions.
- View itemized bills.

### 5. 🏥 Staff Portal
- Update ward and bed statuses.
- Record patient admissions and discharges.
- Process initial billing entries.
- Monitor bed availability.

### 6. 📅 Appointment Management
- Schedule appointments with doctors.
- Check doctor availability.
- Detect overlapping appointments using a recursive conflict-checking function.
- Prevent double-booking before confirming appointments.

### 7. 🛏️ Ward and Bed Management
- Use a dynamically allocated two-dimensional grid for wards and beds.
- Track bed statuses:
  - Available
  - Occupied
  - Maintenance
- Manage patient room allocations.

### 8. 💳 Billing Management
- Maintain patient billing records.
- Record initial billing entries.
- Generate itemized bills for patients.

### 9. 💾 Data Persistence
- Store patient, doctor, and staff records.
- Maintain medical histories and user logs.
- Use binary file handling to preserve records between program executions.

### 10. 📂 Dynamic Memory and Search
- Use dynamic memory allocation for expandable registries.
- Manage patient and doctor records using structures and pointers.
- Search for patients and doctors by name, specialization, or unique ID.

*The features listed above represent the planned functionality. They will be marked complete as they are implemented and tested.*

## 🛠️ Technologies Used

| Technology | Purpose |
|---|---|
| C | Core programming language |
| `stdio.h` | Input/output and file operations |
| `stdlib.h` | Dynamic memory allocation and utility functions |
| `string.h` | String manipulation and searching |
| `time.h` | Date and time operations, if required |
| Structures | Organizing hospital records |
| Pointers | Memory and record management |
| Recursion | Appointment conflict checking |
| Binary files | Persistent data storage |
| GCC | C compiler |
| VS Code | Development environment |
| Git and GitHub | Version control and project tracking |

## 🧠 Core Programming Concepts

This project aims to apply the following Programming Fundamentals concepts:

- Conditional statements (`if-else`, `switch`)
- Loops (`for`, `while`, `do-while`)
- Functions and recursion
- Arrays and strings
- Structures and nested structures
- Pointers and dynamic memory allocation
- Two-dimensional dynamic arrays
- File handling using binary files
- Searching and record management
- Modular programming using separate source and header files

## 📁 Project Structure

The following is the proposed directory structure. It may change as development progresses.

```text
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
│   └── Generated binary data files
│
└── docs/
    └── Project documentation
```

## ⚙️ Installation and Execution

### Prerequisites

- GCC C compiler
- VS Code or Code::Blocks
- Git

### Clone the Repository

Replace `YOUR-USERNAME` with the GitHub username that owns the repository.

```bash
git clone https://github.com/YOUR-USERNAME/Hospital-Management-System.git
```

### Navigate to the Project

```bash
cd Hospital-Management-System
```

### Compile the Program

For a single-file version:

```bash
gcc main.c -o hospital
```

For a modular version, compile all implemented source files together:

```bash
gcc main.c src/*.c -Iinclude -o hospital
```

### Run the Program

**Windows:**

```bash
hospital.exe
```

**Linux:**

```bash
./hospital
```

The compilation command must match the actual source files in the repository. On Windows, if your shell does not support `src/*.c`, list the source files explicitly.

## 📅 Weekly Development Progress

The project is planned over **13 weeks**. The table below shows the intended development milestones; statuses should be updated according to the work actually completed and tested.

| Week | Planned Development | Status |
|---|---|---|
| Week 1 | Project proposal, planning, and GitHub repository setup | ✅ Done |
| Week 2 | Program structure and initial menu planning | ✅ Done |
| Week 3 | Username/password authentication | ✅ Done |
| Week 4 | Authentication integration and portal access | ✅ Done |
| Week 5 | Main menu and basic portal navigation | 🔄 In Progress |
| Week 6 | Admin Portal functionality | ⏳ Pending |
| Week 7 | Doctor Portal functionality | ⏳ Pending |
| Week 8 | Patient Portal functionality | ⏳ Pending |
| Week 9 | Staff Portal functionality | ⏳ Pending |
| Week 10 | Appointment scheduling and conflict checking | ⏳ Pending |
| Week 11 | Ward/bed management and dynamic memory allocation | ⏳ Pending |
| Week 12 | Billing, searching, and binary file handling | ⏳ Pending |
| Week 13 | Integration, testing, debugging, documentation, and final submission | ⏳ Pending |

**Note:** The weekly plan is tentative. If a feature is completed earlier or later, update the relevant milestone and status accordingly. Weekly progress reports should describe the work done during that particular week.

## 📊 Current Project Status

**Development Stage:** Initial Implementation

The project repository and basic program structure have been established. Username and password authentication is working, and the program displays a welcome message for the selected portal after login.

The next development steps are to establish the main menu and portal navigation, then implement the individual portal functionalities.

The remaining planned features will be developed and integrated incrementally.

## 🔄 GitHub Weekly Updates

The repository will be updated regularly to document the project's development throughout the semester.

Each weekly update should cover:

- Newly implemented features.
- Changes to existing code.
- Bugs fixed and testing performed.
- Documentation updates.
- A meaningful Git commit describing the changes.

### Example Git Commands

Check the changed files:

```bash
git status
```

Stage the changes:

```bash
git add .
```

Commit the changes:

```bash
git commit -m "Week 5: Improve portal navigation"
```

Push to GitHub:

```bash
git push origin main
```

Commit messages should describe the actual changes made during that development session.

## 🚀 Future Improvements

Depending on the time available and project requirements, possible improvements include:

- Enhanced input validation and error handling.
- More detailed audit logs.
- Improved appointment and billing reports.
- Additional record-searching capabilities.
- More comprehensive system testing.

## 📜 License

This project is developed for academic purposes as part of the Programming Fundamentals semester-end project at FAST-NUCES Karachi Campus.

---

**Hospital Management System**  
Programming Fundamentals (CL1002) | FAST-NUCES Karachi Campus | BCS-1C
