@interface AWEIMMessageForwardMenuItem : AWEIMBaseMessageMenuItem
+ (void)doMessageMenuAction:;
+ (id)menuItemImageName:;
+ (id)menuItemTitle:;
+ (unsigned long long)menuItemType;
+ (void)shareMessage;
@end
