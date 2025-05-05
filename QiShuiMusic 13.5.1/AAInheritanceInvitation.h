@interface AAInheritanceInvitation : NSObject
@property (nonatomic) NSUUID beneficiaryID;
@property (nonatomic) NSString beneficiaryHandle;
@property (nonatomic) NSString beneficiaryFirstName;
@property (nonatomic) NSString beneficiaryLastName;
@property (nonatomic) NSString beneficiaryDisplayName;
@property (nonatomic) q status;
- (id)_statusDescription;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)beneficiaryID;
- (id)beneficiaryFirstName;
- (id)beneficiaryLastName;
- (id)initWithBeneficiaryID:beneficiaryHandle:;
- (id)initWithBeneficiaryID:beneficiaryHandle:beneficiaryFirstName:beneficiaryLastName:beneficiaryDisplayName:status:;
- (id)beneficiaryHandle;
- (id)beneficiaryDisplayName;
+ (BOOL)supportsSecureCoding;
@end
