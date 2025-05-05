@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void)touchesEnded:withEvent:;
- (BOOL)updateForNewData:actions:;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (id)_stringForRSSI;
- (BOOL)_updateWithRaw:bars:enableRSSI:showFailure:useSmallBars:;
- (id)_signalStrengthBarsImageName;
@end
