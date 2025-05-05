@interface UIAlertControllerVisualStyleAlert : UIAlertControllerVisualStyle
- (double)maximumWidth;
- (id)titleLabelFont;
- (id)titleLabelColor;
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
- (BOOL)placementAvoidsKeyboard;
- (double)_marginAroundActionGroup;
- (double)textFieldHorizontalMargin;
- (id)textFieldContainingViewWithTextField:position:;
@end
