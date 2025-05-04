@interface AWETeenLandscapeSpeedPlayView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) NSMutableArray selectItems;
@property (nonatomic) BOOL isPanelShowing;
@property (nonatomic) UITapGestureRecognizer tapGesture;
- (BOOL)isPanelShowing;
- (void)setIsPanelShowing:;
- (id)selectItems;
- (void)setSelectItems:;
- (void)p_layoutViews;
- (void)p_addBlurEffect;
- (void)p_activateButtonWithPlaybackRateType:;
- (void)clickButton:;
- (void)p_onScreenClicked;
- (void)show;
- (id)init;
- (void)close;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
@end
