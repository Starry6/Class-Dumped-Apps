@interface AWEPOISecKillView : UIView
@property (nonatomic) UIImageView backGroundView;
@property (nonatomic) UILabel countDownLabel;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) q targetTime;
@property (nonatomic) NSString countDownText;
@property (nonatomic) NSTimer countDownTimer;
- (id)countDownLabel;
- (void)setCountDownLabel:;
- (id)backGroundView;
- (void)setBackGroundView:;
- (id)countDownText;
- (void)setCountDownText:;
- (void)loadCountdownTimer;
- (id)timeText:;
- (void)updateCountdownNumber;
- (id)initWithFrame:secKillInfo:;
- (void).cxx_destruct;
- (long long)targetTime;
- (void)cleanTimer;
- (void)setTargetTime:;
- (void)setupUI;
- (id)countDownTimer;
- (void)setCountDownTimer:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
