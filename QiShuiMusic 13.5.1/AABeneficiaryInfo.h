@interface AABeneficiaryInfo : AABeneficiary
@property (nonatomic) NSString handle;
@property (nonatomic) NSUUID beneficiaryID;
@property (nonatomic) NSString benefactorAltDSID;
@property (nonatomic) AKInheritanceAccessKey accessKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)handle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithBeneficiaryID:benefactorAltDSID:handle:;
+ (BOOL)supportsSecureCoding;
@end
