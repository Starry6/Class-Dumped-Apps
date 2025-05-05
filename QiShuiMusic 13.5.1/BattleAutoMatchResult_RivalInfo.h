@interface BattleAutoMatchResult_RivalInfo : IESLivePBBaseMessage
@property (nonatomic) NSString openUserId;
@property (nonatomic) HTSLiveRoom room;
@property (nonatomic) BOOL hasRoom;
+ (id)descriptor;
@end
