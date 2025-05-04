@interface AWESoftADAwardInfo : MTLModel
@property (nonatomic) q rewardAmount;
@property (nonatomic) q coolDownTime;
@property (nonatomic) NSDictionary aggrInfo;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (long long)coolDownTime;
- (void)setCoolDownTime:;
- (id)aggrInfo;
- (void)setAggrInfo:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
