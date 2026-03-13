/**
 * @file policy_engine.c
 * @brief Implementation of the insurance policy decision engine.
 */

#include "policy_engine.h"

/**
 * @brief Evaluates an insurance application using underwriting rules.
 *
 * Business rules used in this example:
 * - Reject if applicant is under 18
 * - Reject if applicant has a criminal record
 * - Send for manual review if accident count is greater than 2
 * - Send for manual review if credit score is below 600
 * - Otherwise approve
 *
 * @param applicant The applicant to evaluate
 * @return PolicyDecision The outcome of the evaluation
 */
PolicyDecision evaluate_policy(Applicant applicant) {
    if (applicant.age < 18) {
        return POLICY_REJECTED;
    }

    if (applicant.has_criminal_record == 1) {
        return POLICY_REJECTED;
    }

    if (applicant.accident_count > 2) {
        return POLICY_MANUAL_REVIEW;
    }

    if (applicant.credit_score < 600) {
        return POLICY_MANUAL_REVIEW;
    }

    return POLICY_APPROVED;
}

/**
 * @brief Converts a policy decision to a readable string.
 *
 * @param decision The policy decision value
 * @return const char* Human-readable version of the decision
 */
const char* decision_to_string(PolicyDecision decision) {
    switch (decision) {
        case POLICY_APPROVED:
            return "Approved";
        case POLICY_REJECTED:
            return "Rejected";
        case POLICY_MANUAL_REVIEW:
            return "Manual Review";
        default:
            return "Unknown";
    }
}