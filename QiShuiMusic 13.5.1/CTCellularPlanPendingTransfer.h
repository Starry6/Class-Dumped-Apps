@interface CTCellularPlanPendingTransfer : NSObject
@property (nonatomic) NSString sourceIccid;
@property (nonatomic) NSString carrierName;
@property (nonatomic) NSString deviceName;
@property (nonatomic) CTUserLabel planLabel;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) NSString countryCode;
@property (nonatomic) q status;
- (void)setCountryCode:;
- (void)setStatus:;
- (id)countryCode;
- (id)init;
- (void)setDeviceName:;
- (id)phoneNumber;
- (id)deviceName;
- (void)setPhoneNumber:;
- (void)setCarrierName:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)carrierName;
- (void).cxx_destruct;
- (id)description;
- (long long)status;
- (id)planLabel;
- (void)setPlanLabel:;
- (id)sourceIccid;
- (void)setSourceIccid:;
+ (BOOL)supportsSecureCoding;
@end
