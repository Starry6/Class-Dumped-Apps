@interface ICDelegateAccountStoreReader : NSObject
@property (nonatomic) NSDate lastExpirationPruningDate;
@property (nonatomic) q overestimatedNumberOfTokens;
- (void)enumerateDelegationUUIDsForUserIdentity:usingBlock:;
- (void)enumerateTokensWithType:usingBlock:;
- (long long)overestimatedNumberOfTokens;
- (id)identityPropertiesForUserIdentity:;
- (id)lastExpirationPruningDate;
- (void).cxx_destruct;
- (void)enumerateTokensUsingBlock:;
- (void)_enumerateQueryResults:usingBlock:;
- (id)_tokenWithSQLiteRow:;
- (id)initWithConnection:;
- (id)_userIdentityWithSQLiteRow:;
- (void)invalidate;
- (id)tokenForUserIdentity:;
@end
