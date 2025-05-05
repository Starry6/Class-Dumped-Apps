@interface HTSLiveRoomBattleMode : IESLivePBBaseMessage
@property (nonatomic) NSInteger roomBattleModeType;
@property (nonatomic) NSInteger battleModeInfoOneOfCase;
@property (nonatomic) HTSLiveRoomBattleThemeParam roomBattleThemeParam;
+ (id)descriptor;
@end
