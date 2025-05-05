@interface UIAlertControllerVisualStyleActionSheetCar : UIAlertControllerVisualStyleActionSheet
- (id)titleLabelFont;
- (id)titleLabelColor;
- (double)marginAboveTitleLabelFirstBaseline;
- (id)messageLabelFont;
- (id)messageLabelColor;
- (double)marginBelowLastLabelLastBaseline;
- (id)contentInsetsForContainerView:;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (long long)maximumNumberOfLinesInTitleLabel;
- (long long)maximumNumberOfLinesInMessageLabel;
@end
