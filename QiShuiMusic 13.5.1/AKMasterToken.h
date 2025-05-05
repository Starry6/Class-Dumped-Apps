@interface AKMasterToken : AKToken
@property (nonatomic) NSData sessionKey;
@property (nonatomic) NSData encryptedSessionKey;
@property (nonatomic) NSData externalizedVersion;
@property (nonatomic) NSString externalizedVersionString;
- (id)init;
- (id)externalizedVersion;
- (id)encryptedSessionKey;
- (void)setStringValue:;
- (BOOL)updateWithHTTPURLResponse:;
- (id)sessionKey;
- (id)initWithAppleID:altDSID:;
- (id)stringValue;
- (void).cxx_destruct;
- (id)externalizedVersionString;
- (void)_setEncryptedSessionKey:;
- (void)_setSessionKey:;
+ (id)tokenWithExternalizedVersion:lifetime:;
+ (id)tokenWithExternalizedVersionString:;
@end
