@interface AWEDelayRecordConfigPanelView : UIButton
@property (nonatomic) ACCRecordCountDownPlusViewModel countdownViewModel;
@property (nonatomic) AWEDelayRecordPanelHeaderView headerView;
@property (nonatomic) AWEDelayRecordPanelWaveformView waveformView;
@property (nonatomic) ACCButton delayRecordButton;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView clearView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateContentHeight:;
- (id)clearView;
- (void)setClearView:;
- (id)initWithFrame:model:;
- (void)setupContent:;
- (double)panelContentViewHeight;
- (double)panelViewHeight;
- (id)topRoundCornerShapeLayerWithFrame:;
- (id)delayRecordButton;
- (void)addBlurEffect:;
- (id)countdownViewModel;
- (void)updateSelectedRecordMode:;
- (void)setDelayRecordButton:;
- (void)setCountdownViewModel:;
- (id)containerView;
- (id)identifier;
- (id)headerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setWaveformView:;
- (void)setHeaderView:;
- (id)waveformView;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityViewIsModal;
- (id)panelName;
@end
