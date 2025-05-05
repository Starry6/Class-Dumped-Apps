@interface AMSCommerceService : NSObject
+ (void)setSharedConnection:;
+ (id)sharedConnection;
+ (id)_createXPCConnection;
+ (id)proxyObjectAsync;
+ (id)proxyObject;
+ (id)sharedConnectionAccessQueue;
@end
