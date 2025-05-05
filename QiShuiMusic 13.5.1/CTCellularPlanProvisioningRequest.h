@interface CTCellularPlanProvisioningRequest : NSObject
@property (nonatomic) NSString address;
@property (nonatomic) NSString matchingID;
@property (nonatomic) NSString OID;
@property (nonatomic) NSString confirmationCode;
@property (nonatomic) NSString ICCID;
@property (nonatomic) NSString EID;
- (id)ICCID;
- (id)OID;
- (id)init;
- (void)setAddress:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setOID:;
- (void)setICCID:;
- (void).cxx_destruct;
- (id)description;
- (id)address;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)matchingID;
- (void)setMatchingID:;
- (id)confirmationCode;
- (void)setConfirmationCode:;
- (id)EID;
- (void)setEID:;
+ (BOOL)supportsSecureCoding;
@end
