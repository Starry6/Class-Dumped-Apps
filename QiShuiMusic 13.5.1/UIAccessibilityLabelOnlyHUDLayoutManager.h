@interface UIAccessibilityLabelOnlyHUDLayoutManager : UIAccessibilityHUDLayoutManager
- (id)unscaledSizeForHUD:containingSize:;
- (id)minimumUnscaledSizeForHUD:preferredLabelSize:;
- (id)labelFrameForHUD:preferredSize:;
- (id)labelFontForHUD:;
- (BOOL)labelContainsSingleCharacter:;
@end
