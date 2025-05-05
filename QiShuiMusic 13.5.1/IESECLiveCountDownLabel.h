@interface IESECLiveCountDownLabel : UILabel
@property (nonatomic) UIColor countDownColor;
@property (nonatomic) IESECGCDTimer countDownTimer;
@property (nonatomic) IESECLiveConfigCountDownModel countDownModel;
@property (nonatomic) <IESECLiveConfigViewDelegate> delegate;
- (void)reloadCountDown;
- (void)checkValidIfNeeded;
- (id)countDownColor;
- (id)countDownModel;
- (void)setCountDownColor:;
- (void)setCountDownModel:;
- (void)setupCountDownTimer;
- (void)invalidateTimer;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setCountDownTimer:;
- (id)countDownTimer;
- (id)initWithTextColor:;
@end
