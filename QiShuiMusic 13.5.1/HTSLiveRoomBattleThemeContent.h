@interface HTSLiveRoomBattleThemeContent : IESLivePBBaseMessage
@property (nonatomic) q targetThemeId;
@property (nonatomic) NSMutableArray roomBattleThemeListArray;
@property (nonatomic) Q roomBattleThemeListArray_Count;
+ (id)descriptor;
@end
