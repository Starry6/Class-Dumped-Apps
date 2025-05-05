@interface RecordResponse_BattleRecord : IESLivePBBaseMessage
@property (nonatomic) NSString mixRivalSecUserId;
@property (nonatomic) BattleUserInfo userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) q battleStartTime;
@property (nonatomic) q rivalLivingRoomId;
@property (nonatomic) NSInteger battleResultType;
@property (nonatomic) q ownHistoricRoomId;
@property (nonatomic) q channelId;
@property (nonatomic) q matchType;
@property (nonatomic) NSString rivalOpenId;
@property (nonatomic) NSString rivalUnionId;
@property (nonatomic) HTSLiveRoom rivalLivingRoom;
@property (nonatomic) BOOL hasRivalLivingRoom;
@property (nonatomic) NSString signExtra;
@property (nonatomic) NSInteger followType;
@property (nonatomic) NSInteger increaseOrDecreaseInvite;
@property (nonatomic) BOOL inviteRejectPermanent;
@property (nonatomic) q allCount;
@property (nonatomic) q winCount;
@property (nonatomic) q loseCount;
@property (nonatomic) NSString battleAttachedInfo;
- (id)mixRivalSecUserId;
+ (id)descriptor;
@end
