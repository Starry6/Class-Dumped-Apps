@interface IESLiveRoomBattleReceiverConfig : NSObject
@property (nonatomic) HTSLiveUser inviterUser;
@property (nonatomic) HTSLiveInviteRoomInfo inviterRoomInfo;
@property (nonatomic) NSString titleStr;
@property (nonatomic) NSString inviteTipsStr;
@property (nonatomic) NSString themeStr;
@property (nonatomic) q inviteType;
@property (nonatomic) NSInteger inviterRoomJoinStatus;
- (id)inviterRoomInfo;
- (void)setInviterUser:;
- (id)inviteTipsStr;
- (long long)inviteType;
- (int)inviterRoomJoinStatus;
- (id)inviterUser;
- (void)setInviteTipsStr:;
- (void)setInviteType:;
- (void)setInviterRoomInfo:;
- (void)setInviterRoomJoinStatus:;
- (void)setThemeStr:;
- (void)setTitleStr:;
- (id)themeStr;
- (id)titleStr;
- (void).cxx_destruct;
@end
