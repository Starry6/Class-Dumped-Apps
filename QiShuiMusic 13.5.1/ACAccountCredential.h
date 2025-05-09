@interface ACAccountCredential : NSObject
@property (nonatomic) BOOL requiresTouchID;
@property (nonatomic) NSString token;
@property (nonatomic) NSString oauthTokenSecret;
@property (nonatomic) NSString password;
@property (nonatomic) NSString credentialType;
@property (nonatomic) NSSet dirtyProperties;
@property (nonatomic) BOOL dirty;
@property (nonatomic) BOOL empty;
@property (nonatomic) NSString oauthTokenNoSync;
@property (nonatomic) NSString oauthRefreshToken;
@property (nonatomic) NSDate expiryDate;
@property (nonatomic) NSString findMyiPhoneToken;
@property (nonatomic) NSString mapsToken;
@property (nonatomic) NSString mdmServerToken;
@property (nonatomic) NSString hsaToken;
@property (nonatomic) NSDate tokenExpiryDate;
@property (nonatomic) NSString oauthToken;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDirty:;
- (id)_initWithProtobuf:;
- (id)mdmServerToken;
- (id)credentialType;
- (void)_markPropertyDirty:;
- (void)setPassword:;
- (id)oauthRefreshToken;
- (id)init;
- (id)dirtyProperties;
- (id)password;
- (BOOL)isEmpty;
- (void)setCredentialItem:forKey:;
- (id)_initWithProtobufData:;
- (id)_encodeProtobufData;
- (id)findMyiPhoneToken;
- (void)setEmpty:;
- (id)keysForCredentialItems;
- (BOOL)isDirty;
- (id)token;
- (void)_clearDirtyProperties;
- (void)setMapsToken:;
- (id)oauthToken;
- (id)initWithOAuthToken:tokenSecret:;
- (id)oauthTokenNoSync;
- (id)credentialItemForKey:;
- (id)initWithCoder:;
- (void)_setOwningAccount:;
- (unsigned long long)hash;
- (id)tokenExpiryDate;
- (id)initWithPassword:;
- (id)credentialItems;
- (id)expiryDate;
- (void)setMdmServerToken:;
- (void)setToken:;
- (void)encodeWithCoder:;
- (BOOL)requiresTouchID;
- (void)setRequiresTouchID:;
- (void)setTokenExpiryDate:;
- (void)setHsaToken:;
- (id)mapsToken;
- (id)hsaToken;
- (id)_encodeProtobuf;
- (void)setOauthToken:;
- (void).cxx_destruct;
- (void)setOauthTokenSecret:;
- (void)setExpiryDate:;
- (void)setCredentialType:;
- (void)setOauthTokenNoSync:;
- (id)oauthTokenSecret;
- (void)setOauthRefreshToken:;
- (id)description;
- (id)initWithOAuth2Token:refreshToken:expiryDate:;
- (void)setFindMyiPhoneToken:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)credentialWithPassword:;
+ (BOOL)supportsSecureCoding;
+ (id)credentialWithOAuthToken:tokenSecret:;
+ (BOOL)credentialPolicyIsMixedForAccountTypeIdentifier:;
+ (id)additionalServiceSegmentForAccountTypeIdentifier:;
+ (id)credentialPolicyForAccountTypeIdentifier:key:clientID:;
+ (id)allSupportedKeys;
+ (id)nonPersistentKeysForAccountTypeIdentifier:credentialType:;
+ (id)supportedKeysForAccountTypeIdentifier:credentialType:;
@end
