# Auto Insurance Policy Engine

A simple C-based policy engine that evaluates auto insurance applications using underwriting rules.

## Project Purpose
This project demonstrates:
- C source code documentation using Doxygen
- developer-facing API/reference documentation
- docs-as-code workflow using Git and GitHub

## Files
- `main.c` - sample entry point
- `policy_engine.h` - declarations and documentation comments
- `policy_engine.c` - policy evaluation logic
- `Doxyfile` - Doxygen configuration

## Sample Rules
- Reject if age is under 18
- Reject if applicant has criminal history
- Manual review if accident count is high
- Manual review if credit score is low

## Documentation
Generate HTML documentation using:

```bash
doxygen Doxyfile