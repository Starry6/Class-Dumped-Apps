@interface AWEFeedSpecialCardService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)specialCardStatsParamManager;
- (void)setHotListNewNetWorkRequest:awemeType:;
- (BOOL)shouldCancelInsertCardForReversalWithType:;
- (BOOL)isFeedSpecialCardShowStrategyEnableWithType:;
- (BOOL)isFeedSpecialCardShowStrategyEnableWithReferString:;
- (BOOL)canBeExemptForShowStrategyWithSourceFromDataList:index:cardName:;
- (BOOL)judgeCanBeExemptForShowStrategyWithSourceFromDataList:index:;
- (BOOL)judgeCanBeExemptForShowStrategyWithSourceFromDataList:index:cardName:;
- (void)didExemptForShowStrategyWithSourceFromDataList:index:model:;
- (id)feedCardFrequencyControlParams;
- (Class)specialCardDataSourceHandler;
+ (BOOL)isSpecialCard:;
+ (id)mainCardTypeForModel:;
@end
