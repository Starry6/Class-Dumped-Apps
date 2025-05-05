@interface IESLiveSaaSPBBattleInviteMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger inviteType;
@property (nonatomic) q channelId;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSString inviteOpenUid;
@property (nonatomic) q battleId;
@property (nonatomic) NSString multipleAgainPrompts;
+ (id)descriptor;
@end
