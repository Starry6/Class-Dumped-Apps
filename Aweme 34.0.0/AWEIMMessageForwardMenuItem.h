@interface AWEIMMessageForwardMenuItem : AWEIMBaseMessageMenuItem
+ (unsigned long long)menuItemType;
+ (void)shareMessage;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
+ (void)forwardImMesssage:;
@end
