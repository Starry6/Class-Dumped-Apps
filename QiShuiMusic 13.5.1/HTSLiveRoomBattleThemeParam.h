@interface HTSLiveRoomBattleThemeParam : IESLivePBBaseMessage
@property (nonatomic) q themeId;
@property (nonatomic) NSInteger themeType;
@property (nonatomic) NSString themeTitle;
@property (nonatomic) NSString themeDescription;
+ (id)descriptor;
@end
