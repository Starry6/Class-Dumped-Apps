@interface AWEIMMessageRecallMenuItem : AWEIMBaseMessageMenuItem
+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
+ (void)doMessageMenuAction:message:;
@end
