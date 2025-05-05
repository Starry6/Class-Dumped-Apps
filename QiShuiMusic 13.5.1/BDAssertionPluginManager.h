@interface BDAssertionPluginManager : NSObject
+ (void)handleDebugFailureWithDesc:;
+ (void)handleFailureWithDesc:;
+ (void)removePlugin:;
+ (void)addPlugin:;
@end
