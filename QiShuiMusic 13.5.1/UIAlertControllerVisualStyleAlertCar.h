@interface UIAlertControllerVisualStyleAlertCar : UIAlertControllerVisualStyleAlert
- (double)maximumWidth;
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginBelowMessageLabelLastBaseline;
- (double)marginBelowLastLabelLastBaseline;
- (id)contentInsetsForContainerView:;
- (BOOL)placementAvoidsKeyboard;
- (long long)maximumNumberOfLinesInTitleLabel;
- (long long)maximumNumberOfLinesInMessageLabel;
@end
