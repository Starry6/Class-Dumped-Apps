@interface BDUGLocationStatusUtil : NSObject
+ (double)timeIntervalForDesiredAccuracy:;
+ (double)accuracyFromDesiredAccuracy:;
+ (long long)authorizationStatusForStatus:;
+ (BOOL)bdLocationEnableForStatus:;
+ (BOOL)bdLocationNotDeterminedForStatus:;
+ (long long)bdugLocationAccuracyConvert:;
+ (BOOL)bdugLocationAuthorizationEnabledForFullAccracy:;
+ (BOOL)bdugLocationAuthorizationEnabledForStatus:;
+ (BOOL)locationEnableForStatus:;
@end
