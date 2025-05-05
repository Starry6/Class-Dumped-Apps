@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView
- (void)removeFromSuperview;
- (long long)textStyle;
- (BOOL)canBecomeFocused;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:withAnimationCoordinator:;
- (long long)buttonType;
- (BOOL)showsTouchWhenHighlighted;
- (BOOL)allowsUserInteraction;
- (double)extraRightPadding;
- (void)movedToSuperview:;
- (BOOL)usesAdvancedActions;
- (id)_pillFrame;
- (void)_updatePillFrame;
@end
