@interface HTSLiveIntroduceCardDisplayInfo : IESLivePBBaseMessage
@property (nonatomic) q displayDuration;
@property (nonatomic) BOOL isOpenTimerIntroduceCard;
@property (nonatomic) q displayTimerSpan;
@property (nonatomic) q displayTimerLoopCnt;
+ (id)descriptor;
@end
