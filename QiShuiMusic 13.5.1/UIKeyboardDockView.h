@interface UIKeyboardDockView : UIView
@property (nonatomic) <UIKeyboardDockViewDelegate> delegate;
@property (nonatomic) UIKeyboardDockItem leftDockItem;
@property (nonatomic) UIKeyboardDockItem rightDockItem;
@property (nonatomic) UIKeyboardDockItem centerDockItem;
- (void)dealloc;
- (id)rightDockItem;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_dockItemButtonWasTapped:withEvent:;
- (void)setDelegate:;
- (id)_keyboardLongPressInteractionRegions;
- (id)leftDockItem;
- (id)initWithFrame:;
- (void)setLeftDockItem:;
- (void)setRightDockItem:;
- (id)delegate;
- (void)_didReceiveHandBiasChangeNotification:;
- (void).cxx_destruct;
- (id)_keyboardLayoutView;
- (id)centerDockItem;
- (void)setCenterDockItem:;
- (id)_dockItemWithButton:;
- (void)_configureDockItem:;
+ (id)_itemFramesForBoundingSize:;
+ (long long)_currentInterfaceOrientation;
+ (id)dockViewHomeGestureExclusionZones;
@end
