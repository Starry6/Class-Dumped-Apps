@interface BDUGLocationTracker : NSObject
+ (id)_getCommonParams;
+ (void)trackRequestTemporaryFullAccuracyAuthorization;
+ (void)trackRequestWhenInUse;
+ (void)trackSessionLaunch;
@end
