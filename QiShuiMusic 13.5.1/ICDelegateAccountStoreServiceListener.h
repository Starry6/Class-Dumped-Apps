@interface ICDelegateAccountStoreServiceListener : NSObject
@property (nonatomic) NSXPCListenerEndpoint XPCEndpoint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openWithCompletionHandler:;
- (void)removeTokensExpiringBeforeDate:completionHandler:;
- (void)addDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)removeAllTokensWithCompletionHandler:;
- (void)removeTokenForUserIdentity:completionHandler:;
- (void)suspend;
- (void)setToken:forUserIdentity:completionHandler:;
- (void)resume;
- (void)removeDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)setIdentityProperties:forUserIdentity:completionHandler:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (id)XPCEndpoint;
- (void)invalidate;
- (void)removeIdentityPropertiesForUserIdentity:completionHandler:;
- (id)_identityStore;
- (void)recreateWithCompletionHandler:;
- (void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:;
- (id)_initWithXPCListener:testingIdentityStore:;
+ (id)machServiceListener;
+ (id)testingListenerWithIdentityStore:;
@end
