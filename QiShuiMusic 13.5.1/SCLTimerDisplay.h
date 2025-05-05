@interface SCLTimerDisplay : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) double currentAngle;
@property (nonatomic) q buttonIndex;
@property (nonatomic) UIColor color;
@property (nonatomic) BOOL reverse;
- (id)initWithFrame:;
- (id)initWithOrigin:radius:;
- (id)initWithOrigin:radius:lineWidth:;
- (void)updateFrame:;
- (void)drawRect:;
- (void)startTimerWithTimeLimit:completed:;
- (void)cancelTimer;
- (void)stopTimer;
- (void)updateTimerButton:;
- (double)currentAngle;
- (void)setCurrentAngle:;
- (long long)buttonIndex;
- (void)setButtonIndex:;
- (id)color;
- (void)setColor:;
- (BOOL)reverse;
- (void)setReverse:;
- (id)countLabel;
- (void)setCountLabel:;
- (void).cxx_destruct;
@end
