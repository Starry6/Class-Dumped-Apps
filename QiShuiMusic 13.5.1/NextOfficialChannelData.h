@interface NextOfficialChannelData : GPBMessage
@property (nonatomic) q roomId;
@property (nonatomic) IESLiveSaaSPBRoom nextRoom;
@property (nonatomic) BOOL hasNextRoom;
+ (id)descriptor;
@end
