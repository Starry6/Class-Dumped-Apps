@interface CTRemotePlan : CTPlan
@property (nonatomic) CTRemotePlanIdentifier planID;
@property (nonatomic) CTPlanTransferAttributes transferAttributes;
@property (nonatomic) CTPlanSignUpDetails signUpDetails;
@property (nonatomic) Q addOnPurchaseType;
@property (nonatomic) Q addOnCarrierFlowType;
- (id)countryCode;
- (id)init;
- (id)phoneNumber;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (id)carrierName;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)planID;
- (void)setPlanID:;
- (id)iccid;
- (id)transferAttributes;
- (void)setTransferAttributes:;
- (id)signUpDetails;
- (void)setSignUpDetails:;
- (unsigned long long)addOnCarrierFlowType;
- (void)setAddOnCarrierFlowType:;
- (unsigned long long)addOnPurchaseType;
- (void)setAddOnPurchaseType:;
+ (BOOL)supportsSecureCoding;
@end
