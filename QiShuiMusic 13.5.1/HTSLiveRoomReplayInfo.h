@interface HTSLiveRoomReplayInfo : IESLivePBBaseMessage
@property (nonatomic) q replayDuration;
@property (nonatomic) NSString replayURL;
@property (nonatomic) NSString contentUniqId;
+ (id)descriptor;
@end
