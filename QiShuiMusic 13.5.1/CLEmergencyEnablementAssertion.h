@interface CLEmergencyEnablementAssertion : CLAssertion
+ (id)newAssertionWithReason:;
+ (id)newAssertionForBundle:withReason:;
+ (id)newAssertionForBundleIdentifier:withReason:;
+ (id)newAssertionWithBundleId:bundlePath:reason:overrideDeauthorizationForBeneficiary:;
@end
