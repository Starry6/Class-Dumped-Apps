@interface HTSLiveRoomGameDataChannelConfig : IESLivePBBaseMessage
@property (nonatomic) NSString fusionTagId;
@property (nonatomic) NSString gameId;
@property (nonatomic) q liveStayLimit;
+ (id)descriptor;
@end
