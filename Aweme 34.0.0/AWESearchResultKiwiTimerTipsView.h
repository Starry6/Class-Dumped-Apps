@interface AWESearchResultKiwiTimerTipsView : UIView
@property (nonatomic) UILabel tipsLab;
@property (nonatomic) UIImageView tipsIcon;
@property (nonatomic) NSTimer timer;
@property (nonatomic) @? countDownFinished;
- (id)tipsLab;
- (id)countDownFinished;
- (void)setTipsLab:;
- (id)tipsIcon;
- (void)setTipsIcon:;
- (void)setCountDownFinished:;
- (void)show;
- (void)setTimer:;
- (id)timer;
- (id)intrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)stop;
@end
