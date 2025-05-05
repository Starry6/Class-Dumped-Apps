@interface LPSettings : NSObject
+ (BOOL)disableAutoPlay;
+ (void)updateFromDefaults;
+ (BOOL)showDebugIndicators;
+ (BOOL)disableLegacyStoreLookups;
+ (BOOL)disableAnimations;
+ (BOOL)subsampleImagesToScreenSize;
@end
