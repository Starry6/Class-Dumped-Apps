@interface AMSFeatureFlagController : NSObject
+ (BOOL)toggleFlags:enabled:;
+ (void)verifyFlags;
@end
