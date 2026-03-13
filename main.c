/**
 * @file main.c
 * @brief Entry point for testing the insurance policy engine.
 */

#include <stdio.h>
#include "policy_engine.h"

/**
 * @brief Main function for running a sample policy evaluation.
 *
 * This function creates a sample applicant, evaluates the policy,
 * and prints the final decision.
 *
 * @return int Returns 0 when execution is successful
 */
int main() {
    Applicant applicant;

    applicant.age = 30;
    applicant.has_criminal_record = 0;
    applicant.accident_count = 1;
    applicant.credit_score = 720;

    PolicyDecision decision = evaluate_policy(applicant);

    printf("Policy Decision: %s\n", decision_to_string(decision));

    return 0;
}