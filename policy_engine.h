/**
 * @file policy_engine.h
 * @brief Header file for a simple insurance policy decision engine.
 *
 * This file defines the data structures and function declarations
 * used to evaluate whether an insurance application should be approved,
 * rejected, or sent for manual review.
 */

#ifndef POLICY_ENGINE_H
#define POLICY_ENGINE_H

/**
 * @brief Represents an insurance applicant.
 *
 * This structure stores the information needed to evaluate
 * a policy application.
 */
typedef struct {
    int age;                /**< Applicant age in years */
    int has_criminal_record;/**< 1 if applicant has criminal history, 0 otherwise */
    int accident_count;     /**< Number of accidents in the last 3 years */
    int credit_score;       /**< Applicant credit score */
} Applicant;

/**
 * @brief Represents the decision made for a policy application.
 */
typedef enum {
    POLICY_APPROVED,        /**< Application is approved */
    POLICY_REJECTED,        /**< Application is rejected */
    POLICY_MANUAL_REVIEW    /**< Application requires manual review */
} PolicyDecision;

/**
 * @brief Evaluates an insurance application.
 *
 * This function applies a set of business rules to determine whether
 * an applicant should be approved, rejected, or flagged for manual review.
 *
 * @param applicant The applicant information to evaluate
 * @return PolicyDecision The final decision for the application
 */
PolicyDecision evaluate_policy(Applicant applicant);

/**
 * @brief Converts a policy decision enum into readable text.
 *
 * This function is useful for printing the decision in a user-friendly format.
 *
 * @param decision The policy decision enum value
 * @return const char* Readable decision text
 */
const char* decision_to_string(PolicyDecision decision);

#endif