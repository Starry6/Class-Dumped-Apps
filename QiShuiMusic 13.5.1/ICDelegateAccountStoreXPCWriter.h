@interface ICDelegateAccountStoreXPCWriter : NSObject
@property (nonatomic) @? externalChangeHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)openWithCompletionHandler:;
- (void)removeTokensExpiringBeforeDate:completionHandler:;
- (void)addDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)dealloc;
- (void)removeAllTokensWithCompletionHandler:;
- (void)removeTokenForUserIdentity:completionHandler:;
- (void)setToken:forUserIdentity:completionHandler:;
- (void)removeDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)setIdentityProperties:forUserIdentity:completionHandler:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)removeIdentityPropertiesForUserIdentity:completionHandler:;
- (void)delegateAccountStoreDidChange;
- (void)recreateWithCompletionHandler:;
- (id)initWithAccountStoreOptions:;
- (id)externalChangeHandler;
- (void)setExternalChangeHandler:;
- (id)_onceWithCompletionHandler:;
- (void)_getXPCConnectionWithCompletion:;
@end
