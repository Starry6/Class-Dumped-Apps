@interface HTSLiveLinkMicGuideMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveLinkMicGuideMessage_AnchorInfo anchorInfo;
@property (nonatomic) BOOL hasAnchorInfo;
@property (nonatomic) q cueThreshold;
@property (nonatomic) q guidelineType;
@property (nonatomic) HTSLiveLinkMicGuideMessage_FastMatchGuideline fastMatchGuideline;
@property (nonatomic) BOOL hasFastMatchGuideline;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveCallToLinkmicContent callToLinkmicContent;
@property (nonatomic) HTSLiveKtvAddSongGuideContent ktvAddSongGuideContent;
@property (nonatomic) HTSLiveCreateGroupChatGuideContent createGroupChatGuideContent;
@property (nonatomic) HTSLiveJoinGroupChatGuideContent joinGroupChatGuideContent;
@property (nonatomic) HTSLiveGuestBattleBubbleGuideContent guestBattleBubbleGuideContent;
@property (nonatomic) HTSLiveCreateTeamfightGuideContent createTeamfightGuideContent;
@property (nonatomic) HTSLiveNormalPaidLinkmicExplainCardContent normalPaidLinkmicExplainCardContent;
@property (nonatomic) HTSLiveNormalPaidLinkmicMigrateToPlayContent normalPaidLinkmicMigrateToPlayContent;
@property (nonatomic) HTSLiveLinkmicFollowEffectContent linkmicFollowEffectContent;
@property (nonatomic) HTSLivePKLinkBubbleContent pkLinkBubbleContent;
@property (nonatomic) HTSLivePlayModeGuideBubbleContent playModeGuideBubbleContent;
+ (id)descriptor;
@end
