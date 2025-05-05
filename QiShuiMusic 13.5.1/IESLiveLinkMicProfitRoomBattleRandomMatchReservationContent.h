@interface IESLiveLinkMicProfitRoomBattleRandomMatchReservationContent : IESLivePBBaseMessage
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString openingTimeTitle;
@property (nonatomic) NSString showReserveNum;
@property (nonatomic) NSString realReserveNum;
@property (nonatomic) BOOL isReserve;
@property (nonatomic) NSString leftEffectiveText;
+ (id)descriptor;
@end
