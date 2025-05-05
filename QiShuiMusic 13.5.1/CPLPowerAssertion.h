@interface CPLPowerAssertion : NSObject
+ (void)_releaseAssertion;
+ (void)_retainAssertion;
+ (void)_doProtected:;
+ (void)setHasEnoughPower:;
+ (BOOL)hasEnoughPower;
+ (void)enableSleep;
+ (id)powerAssertionStatus;
+ (void)disableSleep;
@end
