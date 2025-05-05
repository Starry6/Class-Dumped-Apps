@interface AKInheritanceCLIContext : AKInheritanceContext
@property (nonatomic) NSString accessKeyString;
@property (nonatomic) NSString beneficiaryFirstName;
@property (nonatomic) NSString beneficiaryLastName;
@property (nonatomic) NSString beneficiaryPassword;
@property (nonatomic) NSString identityToken;
- (void)setIdentityToken:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)identityToken;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)accessKeyString;
- (void)setAccessKeyString:;
- (id)beneficiaryPassword;
- (void)setBeneficiaryPassword:;
- (id)beneficiaryFirstName;
- (void)setBeneficiaryFirstName:;
- (id)beneficiaryLastName;
- (void)setBeneficiaryLastName:;
+ (BOOL)supportsSecureCoding;
@end
