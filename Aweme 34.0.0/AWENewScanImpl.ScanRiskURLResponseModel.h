@interface AWENewScanImpl.ScanRiskURLResponseModel : AWEBaseApiModel
@property (nonatomic) NSNumber riskLevel;
@property (nonatomic) NSString riskHostUrlString;
- (void)setRiskLevel:;
- (id)riskHostUrlString;
- (void)setRiskHostUrlString:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (id)riskLevel;
+ (id)JSONKeyPathsByPropertyKey;
@end
