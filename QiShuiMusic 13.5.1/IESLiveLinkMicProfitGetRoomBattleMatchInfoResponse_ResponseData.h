@interface IESLiveLinkMicProfitGetRoomBattleMatchInfoResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleMatchContent roomBattleMatchContent;
@property (nonatomic) BOOL hasRoomBattleMatchContent;
+ (id)descriptor;
@end
