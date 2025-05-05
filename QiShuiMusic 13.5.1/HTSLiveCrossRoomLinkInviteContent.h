@interface HTSLiveCrossRoomLinkInviteContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser inviter;
@property (nonatomic) BOOL hasInviter;
@property (nonatomic) HTSLiveInviteRoomInfo roomInfo;
@property (nonatomic) BOOL hasRoomInfo;
@property (nonatomic) NSString inviteTips;
@property (nonatomic) NSInteger inviterRoomJoinStatus;
@property (nonatomic) HTSLiveRoomBattleMode roomBattleMode;
@property (nonatomic) BOOL hasRoomBattleMode;
@property (nonatomic) NSString introductionContent;
+ (id)descriptor;
@end
