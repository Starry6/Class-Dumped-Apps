@interface UIAccessibilityCustomViewHUDLayoutManager : UIAccessibilityHUDLayoutManager
- (id)minimumUnscaledSizeForHUD:preferredLabelSize:;
- (id)preferredSizeForLabelInHUD:maximumWidth:;
- (void)layoutSubviewsOfHUD:;
@end
