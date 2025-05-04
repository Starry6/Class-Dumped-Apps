@interface AWELuckyCatSendGoldCollectPanelModel : AWELiteBaseApiModel
@property (nonatomic) AWELuckyCatSendGoldCollectPanelIncomeModel incomeData;
@property (nonatomic) NSArray interactionRewardList;
@property (nonatomic) NSString title;
@property (nonatomic) AWELuckyCatSendGoldCollectPanelDIYInfoModel DIYInfo;
@property (nonatomic) BOOL hasFreeChance;
@property (nonatomic) BOOL hasBalanceChance;
- (id)incomeData;
- (void)setIncomeData:;
- (id)interactionRewardList;
- (void)setInteractionRewardList:;
- (id)DIYInfo;
- (void)setDIYInfo:;
- (BOOL)hasFreeChance;
- (void)setHasFreeChance:;
- (BOOL)hasBalanceChance;
- (void)setHasBalanceChance:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)interactionRewardListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
