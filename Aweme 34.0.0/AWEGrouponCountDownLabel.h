@interface AWEGrouponCountDownLabel : UILabel
@property (nonatomic) NSInteger remainSeconds;
@property (nonatomic) NSTimer timer;
- (id)countDownString:;
- (int)remainSeconds;
- (void)setRemainSeconds:;
- (void)setTimer:;
- (id)init;
- (void)dealloc;
- (id)timer;
- (id)initWithTimestamp:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithCoder:;
- (void)start;
@end
