@interface UIStatusBarForegroundView : UIView
@property (nonatomic) q idiom;
@property (nonatomic) UIStatusBarForegroundStyleAttributes foregroundStyle;
@property (nonatomic) UIStatusBar statusBar;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIdiom:;
- (void)dealloc;
- (void)jiggleLockIcon;
- (id)statusBar;
- (void)setFrame:;
- (id)_accessibilityHUDGestureManager:HUDItemForPoint:;
- (void)_accessibilityHUDGestureManager:gestureLiftedAtPoint:;
- (BOOL)pointInside:withEvent:;
- (BOOL)_accessibilityHUDGestureManager:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)_dismissAccessibilityHUDForGestureManager:;
- (long long)idiom;
- (void)animateUnlock;
- (void)setPersistentAnimationsEnabled:;
- (void)_accessibilityHUDGestureManager:showHUDItem:;
- (void)setBounds:;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)_statusBarWindowForAccessibilityHUD;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (id)foregroundStyle;
- (id)initWithFrame:foregroundStyle:usesVerticalLayout:;
- (id)_statusBarItemViewAtPoint:;
- (BOOL)willChangeNavigationItemDisplayWithSystemNavigationAction:;
- (void)_setStatusBarData:actions:animated:;
- (void)setStatusBarData:actions:animated:;
- (void)reflowItemViewsCrossfadingCenter:duration:;
- (void)_reflowItemViewsCrossfadingCenterWithDuration:timeWasEnabled:;
- (void)reflowItemViews:;
- (void)reflowItemViewsForgettingEitherSideItemHistory;
- (void)startIgnoringData;
- (void)stopIgnoringData:;
- (BOOL)ignoringData;
- (void)_cleanUpAfterSimpleReflow;
- (void)_cleanUpAfterDataChange;
- (void)_reflowItemViewsWithDuration:preserveHistory:;
- (id)_computeVisibleItemsPreservingHistory:;
- (BOOL)_tryToPlaceItem:inItemArray:layoutManager:roomRemaining:allowSwap:swappedItem:;
- (BOOL)isShowingBreadcrumb;
- (void)_animateUnlockCompletionBlock:;
- (id)frameForItemOfType:;
- (id)frameForAllItemsInRegion:;
- (BOOL)rectIntersectsTimeItem:;
- (BOOL)rectIntersectsBatteryItem:;
@end
