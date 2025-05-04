@interface AWELuckyCatTreasureInfo : MTLModel
@property (nonatomic) Q completedTimes;
@property (nonatomic) Q goldEggsNeededTimes;
@property (nonatomic) Q goldEggsReward;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)completedTimes;
- (void)setCompletedTimes:;
- (unsigned long long)goldEggsNeededTimes;
- (void)setGoldEggsNeededTimes:;
- (unsigned long long)goldEggsReward;
- (void)setGoldEggsReward:;
+ (id)JSONKeyPathsByPropertyKey;
@end
