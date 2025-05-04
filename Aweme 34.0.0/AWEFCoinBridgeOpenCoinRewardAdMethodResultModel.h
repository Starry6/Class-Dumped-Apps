@interface AWEFCoinBridgeOpenCoinRewardAdMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSNumber subCode;
@property (nonatomic) NSNumber businessCode;
@property (nonatomic) NSString errorMsg;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)subCode;
- (void)setSubCode:;
- (id)businessCode;
- (void)setBusinessCode:;
- (id)code;
- (void)setCode:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
