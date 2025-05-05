@interface MDMClient : MDMClientCore
- (BOOL)isManagedByMDM;
- (id)init;
+ (id)sharedClient;
@end
