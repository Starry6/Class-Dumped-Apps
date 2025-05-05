@interface AACustodianPasswordResetInformation : NSObject
@property (nonatomic) NSString custodianRecoveryToken;
@property (nonatomic) NSString ownerAppleID;
- (id)custodianRecoveryToken;
- (id)initWithCoder:;
- (void)setCustodianRecoveryToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)ownerAppleID;
- (void)setOwnerAppleID:;
- (id)initWithRecoveryToken:ownerAppleID:;
+ (BOOL)supportsSecureCoding;
@end
