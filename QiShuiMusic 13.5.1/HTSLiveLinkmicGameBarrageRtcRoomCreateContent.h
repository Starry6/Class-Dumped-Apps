@interface HTSLiveLinkmicGameBarrageRtcRoomCreateContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicGameInfo gameInfo;
@property (nonatomic) BOOL hasGameInfo;
@property (nonatomic) NSString cdGamePublicStreamId;
+ (id)descriptor;
@end
