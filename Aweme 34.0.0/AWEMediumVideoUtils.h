@interface AWEMediumVideoUtils : NSObject
+ (long long)videoPreloadSize:second:defaultSize:;
+ (long long)videoPreloadSize:second:;
+ (void)trackErrorIfNeeded:message:;
@end
