@interface AWEFCoinBridgeOpenCoinRewardAdAgainMethodResultModel : BDXBridgeModel
@property (nonatomic) NSNumber code;
@property (nonatomic) NSNumber subCode;
@property (nonatomic) NSNumber businessCode;
@property (nonatomic) NSString errorMsg;
@property (nonatomic) NSNumber adAgainFinishedTimes;
- (void)setErrorMsg:;
- (id)errorMsg;
- (id)subCode;
- (void)setSubCode:;
- (id)businessCode;
- (void)setBusinessCode:;
- (void)setAdAgainFinishedTimes:;
- (id)adAgainFinishedTimes;
- (id)code;
- (void)setCode:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
