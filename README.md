# Movie Ticket Reservation System (MTRS)

## Overview
The **Movie Ticket Reservation System (MTRS)** is a command-line-based C++ application designed for booking movie tickets with robust file handling and validation mechanisms. This project utilizes Object-Oriented Programming (OOP) principles and implements various data validation techniques to ensure an efficient ticket reservation experience.

## Features
- **Secure Booking System** – Implements unique user authentication using Aadhar Number and Unique ID.
- **File Handling & Persistence** – Maintains records in text-based databases for seamless transaction tracking.
- **Seat Reservation System** – Ensures seat availability validation and prevents double booking.
- **Date Validation** – Restricts booking to a maximum of 7 days in advance.
- **Input Validation** – Handles incorrect inputs, including octal digit errors (08 and 09).
- **User Logout Mechanism** – Enhances user session management (Planned Feature).

---

## Installation Guide
To run the **MTRS** application on your system, follow these steps:

### Prerequisites
- **C++ Compiler** (e.g., [MingW](https://www.mingw-w64.org/), Clang, or GCC)
- **Integrated Development Environment (IDE)** (e.g., [VS Code](https://code.visualstudio.com/), Code::Blocks, or Dev-C++)

### Setup Instructions
1. Download the repository and extract it into a preferred directory.
2. Ensure the file names remain unchanged to maintain program compatibility.
3. Open the project in an IDE or navigate to the directory via the terminal.

---

## Compilation & Execution

### Command-Line Instructions
#### **Compilation:**
```sh
 g++ mtrs.cpp -o mtrs
```

#### **Execution:**
```sh
 ./mtrs  # On Linux/macOS
 mtrs.exe  # On Windows
```

### IDE Execution
1. Open `mtrs.cpp` in an IDE.
2. Select **Build & Run** (Shortcut: `Ctrl + F5` in VS Code).
3. Follow the on-screen prompts to proceed with ticket reservations.

---

## File Handling Mechanism
The program utilizes text-based storage for persistent data management. The database structure ensures seamless retrieval and updates.

- **User Information File:** Stores Unique ID and Aadhar Number mappings.
- **Seat Reservation File:** Maintains seat availability and booking status.
- **Transaction Logs:** Tracks successful and failed reservations for debugging and auditing purposes.

---

## Known Limitations & Contribution Scope
We welcome contributions to improve the **MTRS** system. Below are known issues that require enhancement:

1. **Date Validation Improvement:** The function `void getDate()` ensures bookings are made only 7 days prior. Although tested under 2800+ test cases, further refinements are encouraged.
2. **Octal Input Handling:** When seats `08` and `09` are booked, users can still proceed by entering `08` or `09` due to invalid octal representation. Input validation enhancements are needed.
3. **Logout Functionality:** A proposed feature to reset session data and return to the login panel after each transaction.

### How to Contribute
1. Fork the repository.
2. Make necessary modifications in the `mtrs.cpp` file.
3. Test the application rigorously.
4. Submit a pull request with detailed changes and justifications.

---

## License
This project is licensed under the **Apache-2.0 License**. Refer to `LICENSE` for details.

---

## Support & Contact
For further queries, reach out via:
- **LinkedIn:** [Rayyan Ashraf](https://www.linkedin.com/in/rayyan-ashraf-71117b249)
- **Instagram:** [@etsrayy](https://www.instagram.com/etsrayy/)
- **Email:** [ryshashraf@gmail.com](mailto:ryshashraf@gmail.com)

---

## Changelog
- Currently working on the **Logout Functionality** to enhance user session management.

---

## Maintainer
**Rayyan Ashraf** – B.Tech Computer Science & Engineering (5th Semester) @ Galgotias University
