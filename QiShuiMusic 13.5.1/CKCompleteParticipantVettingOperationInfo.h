@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo
@property (nonatomic) NSString vettingToken;
@property (nonatomic) NSString vettingEmail;
@property (nonatomic) NSString vettingPhone;
@property (nonatomic) NSString routingKey;
@property (nonatomic) NSData encryptedKey;
@property (nonatomic) NSString baseToken;
@property (nonatomic) NSString displayedHostname;
- (void)setRoutingKey:;
- (id)initWithCoder:;
- (void)setDisplayedHostname:;
- (void)encodeWithCoder:;
- (id)displayedHostname;
- (void).cxx_destruct;
- (id)routingKey;
- (void)setBaseToken:;
- (id)baseToken;
- (id)vettingToken;
- (void)setVettingToken:;
- (id)vettingEmail;
- (void)setVettingEmail:;
- (id)vettingPhone;
- (void)setVettingPhone:;
- (id)encryptedKey;
- (void)setEncryptedKey:;
+ (BOOL)supportsSecureCoding;
@end
