@interface IESLiveLinkMicProfitRoomBattleMatchContent : IESLivePBBaseMessage
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent reservationContent;
@property (nonatomic) IESLiveLinkMicProfitRoomBattleRandomMatchMatchingContent matchingContent;
+ (id)descriptor;
@end
