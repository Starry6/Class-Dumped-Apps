@interface UIStatusBarDataNetworkItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void)touchesEnded:withEvent:;
- (BOOL)updateForNewData:actions:;
- (double)extraRightPadding;
- (double)extraLeftPadding;
- (double)maximumOverlap;
- (BOOL)_updateWithData:networkType:;
- (id)_dataNetworkImageName;
- (id)_dataNetworkImage;
- (id)_stringForRSSI;
@end
