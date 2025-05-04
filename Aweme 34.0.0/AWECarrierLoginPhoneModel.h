@interface AWECarrierLoginPhoneModel : NSObject
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) q carrierType;
@property (nonatomic) NSDate latestSuccessRequestDate;
@property (nonatomic) NSDictionary carrierMaskToken;
@property (nonatomic) NSDictionary carrierValidateToken;
- (void)setCarrierType:;
- (long long)carrierType;
- (id)latestSuccessRequestDate;
- (id)carrierMaskToken;
- (id)carrierValidateToken;
- (void)setLatestSuccessRequestDate:;
- (void)setCarrierMaskToken:;
- (void)setCarrierValidateToken:;
- (void)encodeWithCoder:;
- (id)phoneNumber;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
- (id)initWithCoder:;
@end
