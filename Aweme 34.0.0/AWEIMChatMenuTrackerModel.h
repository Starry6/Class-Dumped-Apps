@interface AWEIMChatMenuTrackerModel : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double requestTime;
@property (nonatomic) double enterChatTime;
@property (nonatomic) double fullUserTime;
@property (nonatomic) double notAnimationTime;
@property (nonatomic) double animation1Time;
@property (nonatomic) double animation1EndTime;
@property (nonatomic) double animation2Time;
@property (nonatomic) double animationTime;
@property (nonatomic) double beginHandleMenuStartTime;
@property (nonatomic) double handleMenuTime;
@property (nonatomic) double handleMenuCacheTime;
@property (nonatomic) double expStartTime;
- (double)enterChatTime;
- (void)setEnterChatTime:;
- (double)fullUserTime;
- (void)setFullUserTime:;
- (double)notAnimationTime;
- (void)setNotAnimationTime:;
- (double)animation1Time;
- (void)setAnimation1Time:;
- (double)animation1EndTime;
- (void)setAnimation1EndTime:;
- (double)animation2Time;
- (void)setAnimation2Time:;
- (double)beginHandleMenuStartTime;
- (void)setBeginHandleMenuStartTime:;
- (double)handleMenuTime;
- (void)setHandleMenuTime:;
- (double)handleMenuCacheTime;
- (void)setHandleMenuCacheTime:;
- (double)expStartTime;
- (void)setExpStartTime:;
- (double)requestTime;
- (void)setStartTime:;
- (void)setRequestTime:;
- (double)startTime;
- (double)animationTime;
- (void)setAnimationTime:;
@end
