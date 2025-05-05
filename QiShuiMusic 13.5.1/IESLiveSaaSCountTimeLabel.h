@interface IESLiveSaaSCountTimeLabel : UILabel
@property (nonatomic) NSObject<OS_dispatch_source> timer;
@property (nonatomic) BOOL isCountDown;
@property (nonatomic) @? timeFormatBlock;
@property (nonatomic) q countTimeState;
@property (nonatomic) q countNum;
@property (nonatomic) @? completion;
- (id)timeFormatBlock;
- (id)initWithTimeFormat:isCountDown:;
- (void)setIsCountDown:;
- (long long)countNum;
- (long long)countTimeState;
- (BOOL)isCountDown;
- (void)pr_countup;
- (void)setCountNum:;
- (void)setCountTimeState:;
- (void)setTimeFormatBlock:;
- (id)completion;
- (void)setCompletion:;
- (void)dealloc;
- (void)start;
- (void)setTimer:;
- (void).cxx_destruct;
- (void)restart;
- (id)timer;
- (void)pause;
- (id)initWithTimeFormat:;
@end
