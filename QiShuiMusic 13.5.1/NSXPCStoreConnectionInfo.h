@interface NSXPCStoreConnectionInfo : NSObject
- (id)persistentStoreCoordinator;
- (id)entitlements;
- (void)dealloc;
- (id)userInfo;
- (id)initForToken:entitlementNames:cache:;
- (id)auditToken;
- (id)description;
@end
