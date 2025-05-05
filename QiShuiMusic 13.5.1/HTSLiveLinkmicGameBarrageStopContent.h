@interface HTSLiveLinkmicGameBarrageStopContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkmicGameInfo gameInfo;
@property (nonatomic) BOOL hasGameInfo;
+ (id)descriptor;
@end
