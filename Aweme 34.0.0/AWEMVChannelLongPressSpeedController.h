@interface AWEMVChannelLongPressSpeedController : AWEMVChannelPlayerCardBaseController
@property (nonatomic) AWEMVChannelLongPressRateView ratePlayView;
@property (nonatomic) BOOL shouldResponseGesture;
@property (nonatomic) double beforeLongPressPlayBackRate;
@property (nonatomic) double beginShowRateTime;
@property (nonatomic) BOOL isShowingRateView;
- (void)trackSpeedModePlayTime:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (void)setShouldResponseGesture:;
- (BOOL)shouldResponseGesture;
- (void)bindEvents;
- (id)ratePlayView;
- (void)setRatePlayView:;
- (void)setIsShowingRateView:;
- (void)setBeginShowRateTime:;
- (void)setBeforeLongPressPlayBackRate:;
- (void)playBackSpeedChangeWithSpeed:;
- (void)trackChangeSpeedMode;
- (double)beforeLongPressPlayBackRate;
- (double)beginShowRateTime;
- (BOOL)isShowingRateView;
- (void)hideRateView;
- (void)showRateView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
