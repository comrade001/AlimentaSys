
# AlimentaSys

AlimentaSys is a management system designed for companies that provide industrial cafeteria services. This application allows users to record meal consumptions, manage shifts and menus, and generate historical consumption reports.

## Features

- **Consumption Registration**: Capture and register user consumptions across different shifts.
- **Shift Management**: Set up custom shifts with consumption limits.
- **Menu Management**: Create and manage menu items specific to each shift.
- **Historical Reports**: Generate reports to analyze consumption patterns.

## Installation

### Requirements

- **Qt 5 or Qt 6**: Requires Qt for the graphical interface.
- **SQLite**: Uses SQLite for data storage.
- **C++ Compiler**: Recommended to use a compiler compatible with Qt (GCC, MinGW).

### Clone the Repository

```bash
git clone https://github.com/your_username/AlimentaSys.git
cd AlimentaSys
```

### Database Setup

The `alimentasys.db` database file is automatically generated on the first application run if it does not already exist.

### Build the Project

1. Open the project in **Qt Creator**.
2. Configure the appropriate build kit.
3. Build and run the project.

## Usage

1. **User Registration**: Add and manage data for users who will use the system.
2. **Shift and Menu Management**: Configure shifts and associated menu items for each shift.
3. **Consumption Recording**: Allows users to record their consumption based on available shifts and menu items.
4. **Report Generation**: Analyze historical consumption.

## Version Control and GitFlow

This project uses GitFlow for version control. The main branches are:
- `main`: The production-ready branch.
- `develop`: The active development branch.

To contribute or create features, initialize GitFlow and work within `feature/`, `release/`, or `hotfix/` branches as needed.

## License

This project is distributed under the LGPL license. See the `LICENSE.md` file for more details.
