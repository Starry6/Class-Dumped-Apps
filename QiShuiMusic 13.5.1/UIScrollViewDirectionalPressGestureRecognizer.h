@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) q activePressType;
- (void)setScrollView:;
- (void)setAllowedTouchTypes:;
- (BOOL)_shouldReceivePress:;
- (id)scrollView;
- (void)setEnabled:;
- (void).cxx_destruct;
- (void)reset;
- (void)setAllowedPressTypes:;
- (id)initWithTarget:action:;
- (void)_setEnabledIfAllowed:;
- (void)_addToViewIfAllowed:;
- (void)_resetToOriginalViewIfAllowed;
- (long long)activePressType;
@end
