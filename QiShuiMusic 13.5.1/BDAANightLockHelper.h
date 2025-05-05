@interface BDAANightLockHelper : NSObject
+ (long long)nightLockEndHour;
+ (long long)nightLockStartHour;
+ (BOOL)withinNightLockTime;
@end
