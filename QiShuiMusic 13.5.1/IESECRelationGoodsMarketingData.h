@interface IESECRelationGoodsMarketingData : MTLModel
@property (nonatomic) Q cardType;
@property (nonatomic) NSString returnReward;
@property (nonatomic) NSString returnRewardPrefix;
@property (nonatomic) NSString returnRewardUnit;
@property (nonatomic) NSString transMeta;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)returnReward;
- (id)returnRewardPrefix;
- (id)returnRewardUnit;
- (void)setReturnReward:;
- (void)setReturnRewardPrefix:;
- (void)setReturnRewardUnit:;
- (void)setTransMeta:;
- (id)transMeta;
- (void).cxx_destruct;
- (unsigned long long)cardType;
- (void)setCardType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
