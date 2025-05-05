@interface AKBeneficiaryAliasSetupResult : NSObject
@property (nonatomic) NSString beneficiaryAltDSID;
@property (nonatomic) NSString beneficiaryAccountName;
- (id)initWithCoder:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)beneficiaryAltDSID;
- (void)setBeneficiaryAltDSID:;
- (id)beneficiaryAccountName;
- (void)setBeneficiaryAccountName:;
+ (BOOL)supportsSecureCoding;
@end
