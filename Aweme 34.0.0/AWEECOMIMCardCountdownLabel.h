@interface AWEECOMIMCardCountdownLabel : UIView
@property (nonatomic) UIStackView layoutView;
@property (nonatomic) UILabel minuteValueLabel;
@property (nonatomic) UILabel minuteUnitLabel;
@property (nonatomic) UILabel secondValueLabel;
@property (nonatomic) UILabel secondUnitLabel;
@property (nonatomic) NSTimer timer;
@property (nonatomic) NSDate startTime;
@property (nonatomic) Q countdownTime;
@property (nonatomic) <AWEECOMIMCardCountdownDelegate> delegate;
- (unsigned long long)countdownTime;
- (void)setCountdownTime:;
- (id)minuteValueLabel;
- (id)secondValueLabel;
- (void)counting:;
- (void)setMinuteValueLabel:;
- (id)minuteUnitLabel;
- (void)setMinuteUnitLabel:;
- (void)setSecondValueLabel:;
- (id)secondUnitLabel;
- (void)setSecondUnitLabel:;
- (void)setTimer:;
- (void)setLayoutView:;
- (void)dealloc;
- (id)timer;
- (void)setStartTime:;
- (id)delegate;
- (id)initWithFrame:;
- (void)updateTime;
- (void).cxx_destruct;
- (id)layoutView;
- (void)setDelegate:;
- (id)startTime;
- (void)stop;
- (void)start;
@end
