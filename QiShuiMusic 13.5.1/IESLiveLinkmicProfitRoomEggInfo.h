@interface IESLiveLinkmicProfitRoomEggInfo : IESLivePBBaseMessage
@property (nonatomic) NSInteger playMode;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) IESLiveTeamfightEggInfo teamfightEggInfo;
@property (nonatomic) q version;
+ (id)descriptor;
@end
