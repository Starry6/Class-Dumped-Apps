@interface AAKeychainManager : NSObject
+ (void)removePasswordForService:username:accessGroup:;
+ (void)setPassword:forServiceName:username:accessGroup:;
+ (id)passwordForServiceName:username:accessGroup:;
@end
