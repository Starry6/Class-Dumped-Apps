@interface AMSMediaTokenServiceKeychainStore : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) NSString keychainAccessGroup;
- (id)keychainAccessGroup;
- (id)initWithClientIdentifier:keychainAccessGroup:;
- (void)setKeychainAccessGroup:;
- (BOOL)storeToken:;
- (void).cxx_destruct;
- (id)retrieveToken;
- (id)_copyKeychainQuery;
- (id)clientIdentifier;
- (void)_removeTokenFromKeychain;
@end
