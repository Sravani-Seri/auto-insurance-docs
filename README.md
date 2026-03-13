<<<<<<< HEAD
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
=======
# Technical Writing Sample: Insurance Domain Documentation

## 1. Introduction
The insurance industry operates with a highly regulated environment and relies on precise communication across multiple stakeholders, including clients, underwriters, actuaries, compliance teams, and technology teams.  

Technical writing for software insurance domain involves translating complex regulatory requirements, underwriting rules, policy terms, and system integrations into clear, concise, and actionable documentation.  

This document demonstrates structured technical writing across four common insurance documentation types:

- Policy Documentation  
- Underwriting Guidelines  
- Rating Engine (premium calculation) 
- API Documentation for an InsurTech Platform  

---

## 2. Policy Documentation
A policy is a contract between the insurance company and the policyholder. It defines the coverage, terms, exclusions, and obligations of both parties.  

Below is an example of a simplified auto insurance policy structure in a technical format:

```python
class AutoInsurancePolicy:
    def __init__(self, policy_number, holder_name, vehicle, coverage_type, premium):
        self.policy_number = policy_number
        self.holder_name = holder_name
        self.vehicle = vehicle  # vehicle details
        self.coverage_type = coverage_type  # e.g., 'Comprehensive', 'Third-party'
        self.premium = premium  # policy cost in USD
        self.is_active = True

    def display_policy(self):
        print(f"Policy Number: {self.policy_number}")
        print(f"Holder Name: {self.holder_name}")
        print(f"Vehicle: {self.vehicle}")
        print(f"Coverage: {self.coverage_type}")
        print(f"Premium: ${self.premium}")
        print(f"Status: {'Active' if self.is_active else 'Inactive'}")
```
**Explanation for Non-Technical Readers:**

| Term             | Meaning                                         |
| ---------------- | ----------------------------------------------- |
| Policy Number    | Unique identifier for the insurance policy      |
| Holder Name      | Name of the insured person                      |
| Vehicle          | Details such as make, model, and year           |
| Coverage Type    | Type of insurance: Comprehensive or Third-party |
| Premium          | Amount customer pays for insurance              |
| display_policy() | Prints all policy details in readable format    |

## 3. Underwriting Rules

Underwriting determines whether a policy should be accepted or rejected. Rules are applied programmatically for consistency.

```python
def underwrite_policy(customer):
    """
    Determines if a policy should be accepted or rejected based on rules.
    """
    if customer.get('criminal_history', False):
        return "Rejected: Criminal history"
    if customer.get('age', 0) < 18:
        return "Rejected: Underage driver"
    if customer.get('vehicle_year', 0) < 2000:
        return "Rejected: Vehicle too old"
    return "Accepted"
```
**Explanation of Rules:**

| Rule	           | Logic                                          |
| ---------------  | ---------------------------------------------- |
| Criminal History | Reject if customer has serious criminal history|
| Age              | Reject if driver is under 18                   |
| Vehicle Year     | Reject if vehicle is older than 2000           |

This rule-based approach ensures consistent, scalable, and auditable decisions.

## 4. Rating Engine

The rating engine calculates insurance premiums dynamically based on customer and vehicle attributes.

```python
def calculate_premium(customer):
    """
    Calculates annual premium based on risk factors.
    Returns: premium amount rounded to 2 decimal places (USD)
    """
    base_premium = 500.0  # base rate in USD

    # Age-based surcharge
    if customer['age'] < 25:
        base_premium *= 1.5
    elif customer['age'] > 60:
        base_premium *= 1.2

    # Vehicle type surcharge
    if customer.get('vehicle_type') == 'Sports':
        base_premium *= 2.0

    # Coverage type surcharge
    if customer['coverage_type'] == 'Comprehensive':
        base_premium *= 1.3

    return round(base_premium, 2)
```
**Premium Factors Explained:**

| Factor        | Description                                                  |
| ------------- | ------------------------------------------------------------ |
| Base Premium  | Starts at $500                                               |
| Age           | Young (<25) and senior (>60) drivers pay higher premiums     |
| Vehicle Type  | Sports or high-performance cars increase premium             |
| Coverage Type | Comprehensive coverage costs more than third-party liability |

## 5. API Documentation

Modern insurance platforms expose APIs to allow integration with apps or partners.

### 5.1 Create Policy

**Endpoint:** POST /api/policies  
**Description:** Creates a new insurance policy

Request Example:

```JSON
{
    "holder_name": "John Doe",
    "vehicle": "Toyota Camry 2022",
    "age": 30,
    "coverage_type": "Comprehensive"
}
```

Response Example:

```JSON
{
    "policy_number": "POL123456",
    "status": "Active",
    "premium": 845.00
}
```

**Explanation:** Returns a unique policy number and calculated premium.

### 5.2 Check Policy Status

**Endpoint:** GET /api/policies/{policy_number}  
**Description:** Retrieves current status and details of an existing policy

Response Example:

```JSON
{
    "policy_number": "POL123456",
    "holder_name": "John Doe",
    "vehicle": "Toyota Camry 2022",
    "coverage_type": "Comprehensive",
    "premium": 845,
    "status": "Active"
}
```

**Explanation:** Helps track policy status and returns comprehensive policy details.

### 5.3 Cancel Policy

**Endpoint:** POST /api/policies/{policy_number}/cancel  
**Description:** Cancels an active insurance policy

Response Example:

```JSON
{
    "policy_number": "POL123456",
    "status": "Cancelled",
    "refund": 200
}
```

**Explanation:** Cancels policy, updates status, and returns any applicable refund.

## 6. Summary for Non-Technical Readers

This technical documentation demonstrates:

**Policy Documentation:** How insurance contracts are structured in software

**Underwriting Rules:** How applications are approved or rejected

**Rating Engine:** How premiums are dynamically calculated based on risk

**API Documentation:** How external systems or applications interact with the platform

