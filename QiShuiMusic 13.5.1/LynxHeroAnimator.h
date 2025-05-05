@interface LynxHeroAnimator : NSObject
@property (nonatomic) <LynxHeroAnimatorDelegate> delegate;
@property (nonatomic) double timePassed;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL isReversed;
- (void)setTimePassed:;
- (void)startWithTimePassed:totalTime:isReversed:;
- (double)timePassed;
- (BOOL)isReversed;
- (double)totalTime;
- (void)setDelegate:;
- (void)stop;
- (void)setIsReversed:;
- (void)setTotalTime:;
- (id)delegate;
- (void).cxx_destruct;
- (void)displayLinkCallback:;
@end
