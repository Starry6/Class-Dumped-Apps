@interface IESIMStatusBarControllerFinder : NSObject
+ (id)currentStatusBarControllerForType:;
+ (id)effectiveStatusBarControllerFrom:for:;
+ (id)planBFrom:for:;
+ (id)windowForControllingOverallAppearance;
@end
