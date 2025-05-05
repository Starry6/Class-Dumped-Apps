@interface HTSLiveRoomGameData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRoomGameDataChannelConfig roomGameDataChannelConfig;
@property (nonatomic) BOOL hasRoomGameDataChannelConfig;
+ (id)descriptor;
@end
