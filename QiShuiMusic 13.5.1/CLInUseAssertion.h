@interface CLInUseAssertion : CLAssertion
+ (id)newAssertionForBundleIdentifier:withReason:level:;
+ (id)newAssertionForBundle:withReason:level:;
+ (id)newAssertionForBundle:withReason:;
+ (id)newAssertionForBundleIdentifier:withReason:;
+ (id)newAssertionForBundleIdentifier:bundlePath:reason:level:;
@end
