@interface BDXBridgeCertOpenByteCertMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber errorCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSString ticket;
@property (nonatomic) NSNumber certStatus;
@property (nonatomic) NSNumber manualStatus;
@property (nonatomic) NSNumber ageRange;
@property (nonatomic) NSDictionary extData;
- (id)extData;
- (id)ageRange;
- (id)certStatus;
- (id)errorMsg;
- (id)manualStatus;
- (void)setAgeRange:;
- (void)setCertStatus:;
- (void)setErrorMsg:;
- (void)setExtData:;
- (void)setManualStatus:;
- (id)errorCode;
- (void)setErrorCode:;
- (void).cxx_destruct;
- (id)ticket;
- (void)setTicket:;
+ (id)JSONKeyPathsByPropertyKey;
@end
