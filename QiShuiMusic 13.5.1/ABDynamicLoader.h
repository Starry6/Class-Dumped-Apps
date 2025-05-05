@interface ABDynamicLoader : NSObject
+ (BOOL)loadFrameworkAtPath:andStoreHandle:bundle:;
+ (BOOL)loadFrameworkAtPath:andStoreHandle:bundle:logging:;
@end
