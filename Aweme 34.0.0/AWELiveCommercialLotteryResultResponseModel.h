@interface AWELiveCommercialLotteryResultResponseModel : AWEBaseApiModel
@property (nonatomic) BOOL isCandidate;
@property (nonatomic) NSDictionary lotteryInfo;
@property (nonatomic) NSDictionary userCondition;
@property (nonatomic) NSDictionary userLuckyInfo;
- (BOOL)isCandidate;
- (id)lotteryInfo;
- (long long)lotteryStatus;
- (id)lotteryResultURL;
- (void)setLotteryInfo:;
- (id)userCondition;
- (void)setUserCondition:;
- (id)userLuckyInfo;
- (void)setUserLuckyInfo:;
- (void).cxx_destruct;
- (void)setIsCandidate:;
+ (id)JSONKeyPathsByPropertyKey;
@end
