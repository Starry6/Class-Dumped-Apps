@interface IESLiveLinkMicProfitRoomBattleMatchResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleMatchStatusContent statusContent;
@property (nonatomic) BOOL hasStatusContent;
+ (id)descriptor;
@end
