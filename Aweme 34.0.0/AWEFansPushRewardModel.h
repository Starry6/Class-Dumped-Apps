@interface AWEFansPushRewardModel : AWEBaseApiModel
@property (nonatomic) q totalDiamondCount;
@property (nonatomic) NSArray totalGiftList;
- (long long)totalDiamondCount;
- (void)setTotalDiamondCount:;
- (id)totalGiftList;
- (void)setTotalGiftList:;
- (void).cxx_destruct;
+ (id)totalGiftListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
