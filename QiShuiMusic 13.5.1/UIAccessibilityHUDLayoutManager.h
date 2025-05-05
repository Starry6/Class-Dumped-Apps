@interface UIAccessibilityHUDLayoutManager : NSObject
- (id)unscaledSizeForHUD:containingSize:;
- (id)minimumUnscaledSizeForHUD:preferredLabelSize:;
- (id)layoutBoundsForHUD:;
- (id)containerViewForHUD:;
- (id)itemContainerViewForHUD:;
- (id)imageInsetsForHUD:;
- (id)imageViewSizeForHUD:preferredSizeForLabel:;
- (id)imageViewFrameForHUD:preferredSizeForLabel:;
- (id)labelFrameForHUD:preferredSize:;
- (id)labelFontForHUD:;
- (id)preferredSizeForLabelInHUD:maximumWidth:;
- (void)layoutSubviewsOfHUD:;
- (unsigned long long)_actualNumberOfLinesForLabelInHUD:preferredSize:;
- (double)_imageCenterToTopForHUD:preferredSizeForLabel:;
@end
