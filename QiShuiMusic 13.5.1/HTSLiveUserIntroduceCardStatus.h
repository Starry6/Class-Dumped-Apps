@interface HTSLiveUserIntroduceCardStatus : IESLivePBBaseMessage
@property (nonatomic) BOOL isShowCard;
@property (nonatomic) q introduceDuration;
@property (nonatomic) q timerSpan;
@property (nonatomic) q timerLoopCnt;
+ (id)descriptor;
@end
