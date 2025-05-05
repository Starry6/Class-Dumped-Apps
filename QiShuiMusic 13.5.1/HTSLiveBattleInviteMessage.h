@interface HTSLiveBattleInviteMessage : IESLivePBBaseMessage
@property (nonatomic) NSString mixInviteUid;
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) q channelId;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSString inviteOpenUid;
@property (nonatomic) q battleId;
@property (nonatomic) NSString multipleAgainPrompts;
@property (nonatomic) PanelTitle panelTitle;
@property (nonatomic) BOOL hasPanelTitle;
@property (nonatomic) NSInteger scene;
@property (nonatomic) NSString inviteTitle;
@property (nonatomic) NSString inviteSubTitle;
@property (nonatomic) q waitSec;
@property (nonatomic) BattleConfigSetting battleConfigSetting;
@property (nonatomic) BOOL hasBattleConfigSetting;
@property (nonatomic) q durationTime;
@property (nonatomic) NSInteger multiPkMode;
@property (nonatomic) NSString clientAttachedInfo;
@property (nonatomic) NSString lynxData;
@property (nonatomic) NSString eventTrackingInfo;
- (id)mixInviteUid;
+ (id)descriptor;
@end
