@interface UIStatusBarBluetoothBatteryItemView : UIStatusBarItemView
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void).cxx_destruct;
- (BOOL)updateForNewData:actions:;
- (double)_normalizedCapacity;
- (double)extraLeftPadding;
- (id)_accessibilityHUDBatteryInsidesInsets;
@end
