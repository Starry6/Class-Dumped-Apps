@interface BDWebViewDebugKit : NSObject
+ (Class)debugger;
+ (void)registerDebugLabel:withAction:;
+ (BOOL)enable;
+ (void)log:;
+ (void)setEnable:;
@end
