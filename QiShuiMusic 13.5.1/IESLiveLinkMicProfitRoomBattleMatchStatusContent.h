@interface IESLiveLinkMicProfitRoomBattleMatchStatusContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchNoExTimeLeftContent noExpectedTimeLeftContent;
+ (id)descriptor;
@end
