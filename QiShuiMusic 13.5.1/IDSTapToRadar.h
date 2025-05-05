@interface IDSTapToRadar : NSObject
+ (BOOL)_isSupported;
+ (void)launchWithRequest:context:;
@end
