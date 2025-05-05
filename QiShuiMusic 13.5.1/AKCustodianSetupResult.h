@interface AKCustodianSetupResult : NSObject
@property (nonatomic) NSData encryptedPRKC;
@property (nonatomic) NSString ownerCustodianAltDSID;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)encryptedPRKC;
- (void)setEncryptedPRKC:;
- (id)ownerCustodianAltDSID;
- (void)setOwnerCustodianAltDSID:;
+ (BOOL)supportsSecureCoding;
@end
