# AeroVault

## Flight Management and Reservation System

AeroVault is a C++ based Flight Management and Reservation System designed to simulate basic airline operations.

The project allows users to manage flights, passengers, reservations, seats, and flight routes while applying fundamental Data Structures and Algorithms.

## Features

- Add new flights
- Display flight details
- Search flights
- Manage passenger information
- Book flight tickets
- Cancel reservations
- Manage available seats
- Generate and search PNR
- Maintain waiting list
- Find routes between airports
- Find the shortest route
- Store data using files

## Data Structures and Algorithms

The project uses different Data Structures and Algorithms to solve real-world problems.

| Data Structure / Algorithm | Purpose |
|---|---|
| Array / Vector | Store flight and passenger records |
| Queue | Manage waiting-list passengers |
| Hash Table | Fast PNR and passenger search |
| Graph | Represent airports and routes |
| BFS / DFS | Route traversal |
| Dijkstra's Algorithm | Find shortest route |
| Priority Queue | Priority-based processing |
| Sorting | Sort flights based on price or other details |

## Project Structure

AeroVault/
│
├── src/
│   ├── main.cpp
│   ├── Flight.cpp
│   ├── Passenger.cpp
│   ├── Reservation.cpp
│   ├── SeatManager.cpp
│   ├── RouteManager.cpp
│   └── HashTable.cpp
│
├── include/
│   ├── Flight.h
│   ├── Passenger.h
│   ├── Reservation.h
│   ├── SeatManager.h
│   ├── RouteManager.h
│   └── HashTable.h
│
├── data/
│   ├── flights.txt
│   ├── passengers.txt
│   └── bookings.txt
│
├── README.md
└── .gitignore

## Main Modules

### Flight Management

Handles flight information such as:

- Flight number
- Source
- Destination
- Available seats
- Ticket price

### Passenger Management

Stores and manages passenger information.

### Reservation System

Handles:

- Ticket booking
- Ticket cancellation
- PNR generation
- Booking status

### Seat Management

Manages seat availability and seat allocation.

### Route Management

Represents airports and their connections using a graph.

Dijkstra's Algorithm is used to find the shortest route between airports.

### Hash Table

Used for efficient searching of passengers and PNR records.

## Example

```text
================================
          AEROVAULT
    FLIGHT MANAGEMENT SYSTEM
================================

1. Search Flight
2. Book Flight
3. Cancel Ticket
4. Search PNR
5. View Passenger
6. Find Shortest Route
7. View Waiting List
8. Exit

Enter your choice:
