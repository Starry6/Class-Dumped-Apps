@interface AABenefactorInfo : NSObject
@property (nonatomic) q status;
@property (nonatomic) NSString handle;
@property (nonatomic) NSUUID beneficiaryID;
@property (nonatomic) NSString benefactorAltDSID;
@property (nonatomic) AKInheritanceAccessKey accessKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_statusDescription;
- (id)handle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (id)copyWithZone:;
- (id)accessKey;
- (void)setAccessKey:;
- (id)beneficiaryID;
- (id)initWithBeneficiaryID:benefactorAltDSID:;
- (id)benefactorAltDSID;
- (id)initWithBeneficiaryID:benefactorAltDSID:handle:;
- (id)initWithBeneficiaryID:handle:status:;
+ (BOOL)supportsSecureCoding;
@end
