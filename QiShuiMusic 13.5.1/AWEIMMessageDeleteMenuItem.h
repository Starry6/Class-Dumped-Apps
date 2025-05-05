@interface AWEIMMessageDeleteMenuItem : AWEIMBaseMessageMenuItem
+ (void)dataReportForDeleteActionOnCell:;
+ (void)deleteMessage:;
+ (void)doMessageMenuAction:;
+ (id)menuItemImageName:;
+ (id)menuItemTitle:;
+ (unsigned long long)menuItemType;
@end
