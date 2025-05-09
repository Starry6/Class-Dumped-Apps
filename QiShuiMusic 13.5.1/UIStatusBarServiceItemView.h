@interface UIStatusBarServiceItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (long long)legibilityStyle;
- (id)contentsImage;
- (void).cxx_destruct;
- (double)standardPadding;
- (BOOL)updateForNewData:actions:;
- (double)updateContentsAndWidth;
- (void)setVisible:frame:duration:;
- (double)extraRightPadding;
- (BOOL)animatesDataChange;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (double)addContentOverlap:;
- (void)_crossfadeStepAnimation;
- (BOOL)updateForContentType:serviceString:serviceCrossfadeString:maxWidth:actions:;
- (id)_contentsImageFromString:withWidth:letterSpacing:;
- (id)_serviceContentsImage;
- (id)_crossfadeContentsImage;
- (void)_loopAnimationDidStopInDirection:;
- (BOOL)_crossfaded;
- (BOOL)_loopingNecessary;
@end
