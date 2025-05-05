@interface AABeneficiary : NSObject
@property (nonatomic) NSUUID beneficiaryID;
@property (nonatomic) NSString benefactorAltDSID;
@property (nonatomic) AKInheritanceAccessKey accessKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)accessKey;
- (void)setAccessKey:;
- (id)beneficiaryID;
- (id)initWithBeneficiaryID:benefactorAltDSID:;
- (id)benefactorAltDSID;
+ (BOOL)supportsSecureCoding;
@end
