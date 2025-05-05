@interface UIAccessibilityImageOnlyHUDLayoutManager : UIAccessibilityHUDLayoutManager
- (id)minimumUnscaledSizeForHUD:preferredLabelSize:;
- (id)imageViewFrameForHUD:preferredSizeForLabel:;
- (id)preferredSizeForLabelInHUD:maximumWidth:;
@end
