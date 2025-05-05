@interface UIAlertControllerVisualStyleActionSheet : UIAlertControllerVisualStyle
- (double)maximumWidth;
- (id)vibrancyEffectForTitleAndMessageLabel;
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)_spacingBetweenDismissButtonAndContent;
- (double)marginAboveTitleLabelFirstBaseline;
- (double)marginBelowTitleLabelLastBaseline;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (id)contentInsetsForContainerView:;
- (double)transitionDurationForPresentation:ofAlertController:;
- (void)animateAlertControllerView:ofAlertController:forPresentation:inContainerView:descendantOfContainerView:duration:completionBlock:;
- (long long)permittedActionLayoutDirection;
- (BOOL)hideCancelAction:inAlertController:;
- (BOOL)placementAvoidsKeyboard;
+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:alertContentView:availableSpaceView:visualStyle:updatableConstraints:;
@end
