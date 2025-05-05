@interface IESLiveSaaSPBInviteRoomInfo : GPBMessage
@property (nonatomic) q inviterRoomId;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) q userCount;
@property (nonatomic) q score;
@property (nonatomic) NSString userCountFuzzy;
@property (nonatomic) NSString scoreFuzzy;
@property (nonatomic) NSString roomDesc;
@property (nonatomic) NSString inviterRoomIdStr;
+ (id)descriptor;
@end
