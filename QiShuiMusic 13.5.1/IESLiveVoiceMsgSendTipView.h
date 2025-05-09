@interface IESLiveVoiceMsgSendTipView : UIView
@property (nonatomic) IESLiveVoiceMeterView meterView;
@property (nonatomic) UIImageView cancelView;
@property (nonatomic) NSTimer recordTimer;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) BOOL isCountdown;
@property (nonatomic) LOTAnimationView countdownView;
@property (nonatomic) @? maxTimeBLock;
@property (nonatomic) double maxRecordDuration;
@property (nonatomic) double recordDuration;
- (void)setIsCountdown:;
- (void)setRecordTimer:;
- (id)cancelView;
- (void)continueRecord;
- (void)countTime;
- (void)endRecord;
- (BOOL)isCountdown;
- (double)maxRecordDuration;
- (id)maxTimeBLock;
- (id)meterView;
- (void)perpareCancelRecord;
- (double)recordDuration;
- (id)recordTimer;
- (void)setCancelView:;
- (void)setMaxRecordDuration:;
- (void)setMaxTimeBLock:;
- (void)setMeterView:;
- (void)setRecordDuration:;
- (void)startRecordWithMaxTimeBlock:;
- (void)volumeChange:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)tipLabel;
- (void)setTipLabel:;
- (void)setupView;
- (id)countdownView;
- (void)setCountdownView:;
@end
