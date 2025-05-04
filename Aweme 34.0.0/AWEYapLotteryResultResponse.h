@interface AWEYapLotteryResultResponse : AWEBaseApiModel
@property (nonatomic) Q businessCode;
@property (nonatomic) NSString businessMsg;
@property (nonatomic) AWEYapLotteryResultInfo lotteryResult;
- (unsigned long long)businessCode;
- (id)businessMsg;
- (id)lotteryResult;
- (void)setBusinessCode:;
- (void)setBusinessMsg:;
- (void)setLotteryResult:;
- (void).cxx_destruct;
+ (id)lotteryResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
