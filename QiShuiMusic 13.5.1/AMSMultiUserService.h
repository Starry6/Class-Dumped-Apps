@interface AMSMultiUserService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)machServiceName;
+ (id)serviceInterface;
+ (void)setSharedConnection:;
+ (id)sharedConnection;
+ (id)_createXPCConnection;
+ (BOOL)isConnectionEntitled:;
+ (id)proxyObjectAsync;
+ (id)proxyObject;
+ (id)sharedConnectionAccessQueue;
@end
