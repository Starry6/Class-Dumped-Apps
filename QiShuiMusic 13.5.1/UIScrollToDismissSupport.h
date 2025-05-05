@interface UIScrollToDismissSupport : UIKeyboardMotionSupport
- (void)hideScrollViewHorizontalScrollIndicator:;
- (void)_updateKeyboardLayoutGuideForInteractiveScrollWithSize:;
- (void)completeKeyboardDismiss:withDuration:;
- (void)scrollView:didPanWithGesture:;
- (void)setInterfaceAutorotationDisabled:forController:;
- (id)cancelNotificationsForMode:;
- (void).cxx_destruct;
- (void)updateScrollViewContentInsetBottom:;
- (void)finishScrollViewTransition;
- (void)completedPlacementFrom:to:forController:;
- (void)finishScrollViewTransitionForController:;
- (void)scrollView:didFinishPanGesture:;
@end
