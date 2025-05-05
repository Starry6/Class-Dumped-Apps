@interface IESLiveInteractiveDebugConfig : NSObject
+ (BOOL)debugEnableClientStream;
+ (BOOL)debugEnableSetMixPriority;
+ (unsigned long long)debugInteractStreamVendor;
+ (BOOL)debugShowInteractInfo;
+ (BOOL)enableDebug;
@end
