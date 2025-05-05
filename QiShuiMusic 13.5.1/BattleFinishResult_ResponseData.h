@interface BattleFinishResult_ResponseData : IESLivePBBaseMessage
@property (nonatomic) HTSLiveLinkMicBattleFinish finishInfo;
@property (nonatomic) BOOL hasFinishInfo;
+ (id)descriptor;
@end
