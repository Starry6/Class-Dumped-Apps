@interface HTSLiveRoomBattleProcessInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger status;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveRoomBattleProcessSelectGuestsContent selectGuestsContent;
@property (nonatomic) HTSLiveRoomBattleProcessWaitingBattleContent waitingBattleContent;
+ (id)descriptor;
@end
