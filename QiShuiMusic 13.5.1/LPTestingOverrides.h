@interface LPTestingOverrides : NSObject
+ (void)reset;
+ (void)setForceRTL:;
+ (BOOL)forceRTL;
+ (void)setForceImageLoadingScaleFactor:;
+ (unsigned long long)forceImageLoadingScaleFactor;
+ (void)setForceSubsampleImagesToScreenSize:;
+ (id)forceSubsampleImagesToScreenSize;
+ (void)setForceEnableAllEntitlements:;
+ (BOOL)forceEnableAllEntitlements;
+ (void)setForceIgnoreAllTCCChecks:;
+ (BOOL)forceIgnoreAllTCCChecks;
+ (void)setForceMonospaceFonts:;
+ (BOOL)forceMonospaceFonts;
+ (void)setCustomLoader:;
+ (id)customLoader;
+ (void)setAdditionalAllowedFileURLDirectories:;
+ (id)additionalAllowedFileURLDirectories;
@end
