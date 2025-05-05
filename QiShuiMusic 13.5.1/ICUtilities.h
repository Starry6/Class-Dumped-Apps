@interface ICUtilities : NSObject
+ (BOOL)isInternetReachable;
+ (BOOL)isInternalInstall;
+ (id)range:liesWithinRange:assert:;
+ (BOOL)isSeedInstall;
@end
