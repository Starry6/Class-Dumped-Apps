@interface AVRoutePickerView : UIView
@property (nonatomic) <AVRoutePickerViewDelegate> delegate;
@property (nonatomic) UIColor activeTintColor;
@property (nonatomic) q routePickerButtonStyle;
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (nonatomic) AVCustomRoutingController customRoutingController;
- (void)_registerNotifications;
- (void)setRoutingConfiguration:;
- (id)routingConfiguration;
- (long long)routePickerButtonStyle;
- (void)_routePickerButtonTouchDown:;
- (void)setPrioritizesVideoDevices:;
- (void)dealloc;
- (void)_addCustomRoutingItemsToRoutePickingControls;
- (id)intrinsicContentSize;
- (void)presentRoutePicker:;
- (void)setAirPlayActive:;
- (void)layoutSubviews;
- (void)_customRoutingItemsDidChange;
- (void)_routePickerButtonTouchUp:;
- (void)setDelegate:;
- (void)setRoutePickerButtonStyle:;
- (void)updateButtonAppearance;
- (void)_routePickerButtonTouchDragEnter:;
- (void)_updateAirPlayActive;
- (BOOL)isAirPlayActive;
- (id)initWithCoder:;
- (void)_routePickerButtonTapped:;
- (BOOL)_isAirPlayOrCustomRouteActive;
- (void)setCustomRoutingController:;
- (void)tintColorDidChange;
- (void)_setRoutePickerButtonAlpha:animated:;
- (id)initWithFrame:;
- (void)setCustomButton:;
- (id)alignmentRectInsets;
- (id)delegate;
- (id)customRoutingController;
- (id)activeTintColor;
- (BOOL)prioritizesVideoDevices;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)_defaultActiveTintColor;
- (void)setActiveTintColor:;
- (void)_setupOutputContext;
- (void)_createOrUpdateRoutePickerButton;
- (id)_normalizedRect:fromView:;
- (id)customButton;
@end
