@interface AWEIMMessageReportMenuItem : AWEIMBaseMessageMenuItem
+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
+ (void)menuItemWillShow:;
@end
