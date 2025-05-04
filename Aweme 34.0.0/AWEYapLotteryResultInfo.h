@interface AWEYapLotteryResultInfo : AWEBaseApiModel
@property (nonatomic) NSString result;
@property (nonatomic) NSString message;
@property (nonatomic) q amount;
@property (nonatomic) BOOL isSuccess;
@property (nonatomic) BOOL addToTotalAmount;
- (BOOL)addToTotalAmount;
- (void)setAddToTotalAmount:;
- (void)setResult:;
- (id)message;
- (void).cxx_destruct;
- (BOOL)isSuccess;
- (void)setMessage:;
- (id)result;
- (long long)amount;
- (void)setAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
