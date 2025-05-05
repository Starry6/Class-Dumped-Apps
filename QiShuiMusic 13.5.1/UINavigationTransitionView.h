@interface UINavigationTransitionView : UIView
@property (nonatomic) @ delegate;
@property (nonatomic) UIView fromView;
@property (nonatomic) BOOL usesRoundedCorners;
@property (nonatomic) BOOL isTransitioning;
@property (nonatomic) BOOL popoverWillCleanUpNavigationTransition;
- (BOOL)usesRoundedCorners;
- (void)dealloc;
- (BOOL)_isTransitioningFromView:;
- (BOOL)popoverWillCleanUpNavigationTransition;
- (BOOL)isTransitioning;
- (void)setDelegate:;
- (BOOL)_prefersFocusContainment;
- (void)_notifyDelegateTransitionDidStopWithContext:;
- (id)fromView;
- (id)initWithCoder:;
- (void)_cleanupTransition;
- (BOOL)transition:fromView:toView:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (void)_navigationTransitionDidStop;
- (id)delegate;
- (void)setPopoverWillCleanUpNavigationTransition:;
- (void).cxx_destruct;
- (void)_cleanupTransitionFromPopover;
- (BOOL)transition:toView:;
- (void)setUsesRoundedCorners:;
+ (double)defaultDurationForTransition:;
@end
