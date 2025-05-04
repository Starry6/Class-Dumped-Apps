@interface AWELivePreStreamLiveCommonGuideView : UIView
@property (nonatomic) AWELivePreStreamCommonFooterViewConfig config;
@property (nonatomic) NSArray avatarList;
@property (nonatomic) AWELivePreStreamLiveDistributeFooterView tipView;
- (void)actionButtonClicked;
- (id)initWithFrame:config:;
- (id)avatarList;
- (void)setAvatarList:;
- (void)stopTimerCountDown;
- (void)showTimerCountDownLabel;
- (void)actionImageClicked:;
- (void)maskClick;
- (void)didLongPress;
- (void)setConfig:;
- (void)setTipView:;
- (id)config;
- (void).cxx_destruct;
- (void)setupUI;
- (id)tipView;
@end
