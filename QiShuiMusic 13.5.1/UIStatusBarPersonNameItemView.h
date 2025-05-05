@interface UIStatusBarPersonNameItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (long long)legibilityStyle;
- (id)contentsImage;
- (void).cxx_destruct;
- (double)standardPadding;
- (BOOL)updateForNewData:actions:;
- (double)extraRightPadding;
- (double)resetContentOverlap;
- (double)addContentOverlap:;
- (BOOL)_updateWithPersonName:maxWidth:;
@end
