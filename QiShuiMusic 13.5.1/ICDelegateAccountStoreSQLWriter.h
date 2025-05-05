@interface ICDelegateAccountStoreSQLWriter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeTokensExpiringBeforeDate:completionHandler:;
- (void)addDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)removeAllTokensWithCompletionHandler:;
- (void)_setToken:forIdentityKey:;
- (void)removeTokenForUserIdentity:completionHandler:;
- (BOOL)_removeTokenForIdentityKey:;
- (void)setToken:forUserIdentity:completionHandler:;
- (void)removeDelegationUUIDs:forUserIdentity:completionHandler:;
- (void)setIdentityProperties:forUserIdentity:completionHandler:;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)invalidate;
- (BOOL)_removeAccountForIdentityKey:;
- (void)removeIdentityPropertiesForUserIdentity:completionHandler:;
@end
