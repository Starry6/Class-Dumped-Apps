@interface HTSLiveDress : IESLivePBBaseMessage
@property (nonatomic) NSString dressId;
@property (nonatomic) NSInteger dressType;
@property (nonatomic) NSString dressName;
@property (nonatomic) q priority;
@property (nonatomic) NSInteger metaOneOfCase;
@property (nonatomic) HTSLiveAvatarBorderConfig avatarBorderConfig;
@property (nonatomic) HTSLiveEnterEffectConfig enterEffectConfig;
@property (nonatomic) HTSLiveBadgeConfig badgeConfig;
@property (nonatomic) HTSLivePersonalCardConfig personalCardConfig;
@property (nonatomic) HTSLiveFeedLabelConfig feedLabelConfig;
@property (nonatomic) HTSLiveProfileSkinConfig profileSkinConfig;
@property (nonatomic) HTSLiveRoomBorderConfig roomBorderConfig;
@property (nonatomic) HTSLiveLikeIconConfig likeIconConfig;
@property (nonatomic) HTSLiveRoomBackgroundConfig roomBackgroundConfig;
@property (nonatomic) HTSLiveRoomChatBorderConfig roomChatBorderConfig;
@property (nonatomic) HTSLiveRoomIconsConfig roomIconsConfig;
@property (nonatomic) HTSLiveVSDanmakuConfig vsDanmakuConfig;
@property (nonatomic) HTSLiveVoiceWaveConfig voiceWaveConfig;
@property (nonatomic) HTSLiveGuestBattleThemeElementConfig guestBattleThemeElement;
@property (nonatomic) HTSLiveOpenAssetConfig openAssetConfig;
@property (nonatomic) HTSLiveRedEnvelopeSkin redEnvelopeSkin;
@property (nonatomic) HTSLiveRolePropConfig rolePropConfig;
@property (nonatomic) HTSLiveLinkmicDecorationConfig linkmicDecorationConfig;
+ (id)descriptor;
@end
