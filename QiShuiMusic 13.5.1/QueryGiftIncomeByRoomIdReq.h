@interface QueryGiftIncomeByRoomIdReq : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSInteger queryType;
+ (id)descriptor;
@end
