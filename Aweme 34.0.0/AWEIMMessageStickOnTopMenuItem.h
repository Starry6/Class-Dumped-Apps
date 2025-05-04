@interface AWEIMMessageStickOnTopMenuItem : AWEIMBaseMessageMenuItem
+ (unsigned long long)menuItemType;
+ (BOOL)checkMessageType:aweType:;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
+ (id)trackerIconType:;
+ (BOOL)checkIsValidConType:;
+ (BOOL)checkRoleInCon:;
+ (BOOL)checkMessageStatus:;
+ (BOOL)canShowItemWithMessage:con:;
@end
