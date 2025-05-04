@interface AWELoginPlatformManager : NSObject
- (BOOL)isDouyin;
- (id)labelForPlatform:;
- (id)aAWEUserModuleServiceDOUYINAdapter;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
+ (id)sharedInstance;
@end
