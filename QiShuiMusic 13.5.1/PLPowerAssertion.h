@interface PLPowerAssertion : NSObject
+ (void)performNoTimeoutPowerAssertionTaskWithName:humanReadableReason:block:;
+ (void)performPowerAssertionTaskWithName:humanReadableReason:timeout:timeoutAction:block:;
+ (unsigned int)takePowerAssertionWithName:humanReadableReason:timeout:timeoutAction:;
+ (void)removePowerAssertionForAssertionID:;
@end
