@interface UIStatusBarExternalForegroundStyleAttributes : UIStatusBarForegroundStyleAttributes
- (id)uniqueIdentifier;
- (double)scale;
- (id)textForNetworkType:;
- (BOOL)usesVerticalLayout;
- (double)standardPadding;
- (double)middlePadding;
- (double)leftEdgePadding;
- (double)rightEdgePadding;
- (id)edgeInsetsForBatteryInsides;
- (id)edgeInsetsForBluetoothBatteryInsides;
- (long long)activityIndicatorStyleWithSyncActivity:;
- (id)makeTextFontForStyle:;
- (double)textOffsetForStyle:;
@end
