@interface UIStatusBarBluetoothItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (void)setVisible:;
- (id)contentsImage;
- (BOOL)updateForNewData:actions:;
- (void)performPendedActions;
- (double)alphaForConnected:;
@end
