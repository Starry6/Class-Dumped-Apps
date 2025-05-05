@interface HTSLiveGuestBattleThemeElementConfig : IESLivePBBaseMessage
@property (nonatomic) GPBInt64Array scenesArray;
@property (nonatomic) Q scenesArray_Count;
@property (nonatomic) q allowListId;
@property (nonatomic) HTSLiveGuestBattleFirstConfig firstConfig;
@property (nonatomic) BOOL hasFirstConfig;
@property (nonatomic) HTSLiveGuestBattleStragglerConfig stragglerConfig;
@property (nonatomic) BOOL hasStragglerConfig;
@property (nonatomic) HTSLiveImage bannerBg;
@property (nonatomic) BOOL hasBannerBg;
@property (nonatomic) HTSLiveImage battleRanklistCrownBg;
@property (nonatomic) BOOL hasBattleRanklistCrownBg;
@property (nonatomic) HTSLiveImage playBg;
@property (nonatomic) BOOL hasPlayBg;
@property (nonatomic) BOOL global;
@property (nonatomic) HTSLiveImage playRuleImg;
@property (nonatomic) BOOL hasPlayRuleImg;
@property (nonatomic) HTSLiveGuestBattlePlayerConfig secondPlaceConfig;
@property (nonatomic) BOOL hasSecondPlaceConfig;
@property (nonatomic) HTSLiveGuestBattlePlayerConfig thirdPlaceConfig;
@property (nonatomic) BOOL hasThirdPlaceConfig;
+ (id)descriptor;
@end
