@interface AWETeenAutoPlaySwitchView : UIView
@property (nonatomic) UIView switchContentView;
@property (nonatomic) UILabel timerView;
@property (nonatomic) UIImageView pauseImageView;
@property (nonatomic) UIImageView refreshView;
@property (nonatomic) UIImageView playImageView;
@property (nonatomic) BOOL showingTimerTip;
- (id)refreshView;
- (id)pauseImageView;
- (void)setPauseImageView:;
- (void)setRefreshView:;
- (void)updateViewWithAutoPlayState:animated:;
- (void)updatePlayTimeTip:withText:autoPlayState:;
- (BOOL)showingTimerTip;
- (id)switchContentView;
- (void)setShowingTimerTip:;
- (void)setSwitchContentView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timerView;
- (void)setupUI;
- (void)setTimerView:;
- (id)playImageView;
- (void)setPlayImageView:;
@end
