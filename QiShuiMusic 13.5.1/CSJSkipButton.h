@interface CSJSkipButton : UIButton
@property (nonatomic) NSString skipText;
@property (nonatomic) double timeInterval;
@property (nonatomic) q buttonStyle;
@property (nonatomic) BUTimer timer;
@property (nonatomic) NSDate beginTimeStamp;
@property (nonatomic) double countdownTimeInterval;
@property (nonatomic) CAShapeLayer backgroundLayer;
@property (nonatomic) CAShapeLayer frontFillLayer;
@property (nonatomic) double trackWidth;
@property (nonatomic) @? timeOut;
- (void)beginCountDown:;
- (id)beginTimeStamp;
- (id)frontFillLayer;
- (void)p_setProgress:startAngle:clockwise:;
- (void)p_setupCircleSkipButtonWithFrame:;
- (void)p_setupDefaultSkipButton;
- (void)p_tick;
- (void)pauseCoutDown;
- (void)resumeCoutDown;
- (void)setBeginTimeStamp:;
- (void)setCountdownTimeInterval:;
- (void)setFrontFillLayer:;
- (void)setSkipString:;
- (void)setSkipText:;
- (id)skipString;
- (id)skipText;
- (void)stopCoutDown;
- (double)countdownTimeInterval;
- (void)setButtonStyle:;
- (id)initWithFrame:style:;
- (long long)buttonStyle;
- (void)setTimer:;
- (void)setTimeInterval:;
- (double)timeInterval;
- (void).cxx_destruct;
- (id)timer;
- (id)backgroundLayer;
- (void)setBackgroundLayer:;
- (void)updateText:;
- (void)setTrackWidth:;
- (double)trackWidth;
- (void)setTimeOut:;
- (id)timeOut;
@end
