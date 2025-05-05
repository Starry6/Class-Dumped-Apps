@interface IESLiveSaaSPBRecordResponse_BattleRecord : GPBMessage
@property (nonatomic) IESLiveSaaSPBBattleUserInfo userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) q battleStartTime;
@property (nonatomic) q rivalLivingRoomId;
@property (nonatomic) NSInteger battleResultType;
@property (nonatomic) q ownHistoricRoomId;
@property (nonatomic) q channelId;
@property (nonatomic) q matchType;
@property (nonatomic) NSString rivalOpenId;
@property (nonatomic) NSString rivalUnionId;
@property (nonatomic) IESLiveSaaSPBRoom rivalLivingRoom;
@property (nonatomic) BOOL hasRivalLivingRoom;
+ (id)descriptor;
@end
