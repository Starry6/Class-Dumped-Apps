@interface HTSLiveRoomBattleDataInfo : IESLivePBBaseMessage
@property (nonatomic) q roomBattleCreateTimeMs;
@property (nonatomic) NSInteger inviteSource;
@property (nonatomic) NSString toRoomInstruction;
+ (id)descriptor;
@end
