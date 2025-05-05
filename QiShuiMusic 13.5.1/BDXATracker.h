@interface BDXATracker : NSObject
+ (void)trackEvent:params:;
+ (void)trackLoginSettings;
+ (void)trackUCSendSMSWithFlow:userInfo:error:;
@end
