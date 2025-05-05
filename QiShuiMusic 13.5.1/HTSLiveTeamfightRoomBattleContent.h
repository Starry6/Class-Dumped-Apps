@interface HTSLiveTeamfightRoomBattleContent : IESLivePBBaseMessage
@property (nonatomic) GPBInt64ObjectDictionary roomInfoMap;
@property (nonatomic) Q roomInfoMap_Count;
@property (nonatomic) NSInteger inviteSource;
@property (nonatomic) NSString extra;
@property (nonatomic) HTSLiveRoomBattleMode roomBattleMode;
@property (nonatomic) BOOL hasRoomBattleMode;
@property (nonatomic) NSString ifThemeDefault;
@property (nonatomic) q themeChooserRoomId;
@property (nonatomic) q ifPeakHour;
@property (nonatomic) NSString anchorRelationType;
@property (nonatomic) NSString beginType;
+ (id)descriptor;
@end
