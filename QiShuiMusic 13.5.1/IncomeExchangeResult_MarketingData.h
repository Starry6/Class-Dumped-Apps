@interface IncomeExchangeResult_MarketingData : IESLivePBBaseMessage
@property (nonatomic) BOOL isFirstSendFinish;
@property (nonatomic) BOOL isDailySendFinish;
@property (nonatomic) q firstSendReward;
@property (nonatomic) q dailySendReward;
+ (id)descriptor;
@end
