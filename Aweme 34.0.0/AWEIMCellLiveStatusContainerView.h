@interface AWEIMCellLiveStatusContainerView : UIView
@property (nonatomic) UIView<AWELiveStatusViewProtocol> liveStatusIndicatorView;
@property (nonatomic) BOOL enableClick;
@property (nonatomic) BOOL lastHiddenStatus;
@property (nonatomic) AFDStoryGradientRingView colorRingView;
@property (nonatomic) <AWELiveEntryProtocol> liveEntryProtocol;
@property (nonatomic) <AWEIMCellLiveStatusContainerViewDelegate> delegate;
- (void)p_initUI;
- (void)p_addTapGestureIfNeeded;
- (id)liveStatusIndicatorView;
- (void)updateLiveStatusContent:;
- (BOOL)lastHiddenStatus;
- (void)setLastHiddenStatus:;
- (void)p_handleTap;
- (id)liveEntryProtocol;
- (void)setLiveStatusIndicatorView:;
- (BOOL)enableClick;
- (id)initWithFrame:enableClick:withLiveEntryProtocol:;
- (void)updateLiveColorRingHidden:;
- (void)setLiveEntryProtocol:;
- (id)delegate;
- (void)setHidden:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)colorRingView;
- (void)setColorRingView:;
@end
