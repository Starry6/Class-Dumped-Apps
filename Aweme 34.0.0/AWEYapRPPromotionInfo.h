@interface AWEYapRPPromotionInfo : AWEBaseApiModel
@property (nonatomic) NSString orderNo;
@property (nonatomic) NSString activityId;
@property (nonatomic) NSString currency;
@property (nonatomic) q amount;
- (id)orderNo;
- (void)setOrderNo:;
- (void).cxx_destruct;
- (long long)amount;
- (void)setAmount:;
- (id)activityId;
- (void)setActivityId:;
- (id)currency;
- (void)setCurrency:;
+ (id)JSONKeyPathsByPropertyKey;
@end
