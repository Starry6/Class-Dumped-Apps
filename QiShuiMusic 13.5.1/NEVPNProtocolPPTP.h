@interface NEVPNProtocolPPTP : NEVPNProtocolPPP
@property (nonatomic) q encryptionLevel;
- (id)initFromLegacyDictionary:;
- (id)init;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)createInterface;
- (long long)encryptionLevel;
- (void)setEncryptionLevel:;
+ (BOOL)supportsSecureCoding;
@end
