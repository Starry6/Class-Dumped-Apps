@interface AWEIMMessageDeleteMenuItem : AWEIMBaseMessageMenuItem
+ (unsigned long long)menuItemType;
+ (void)doMessageMenuAction:;
+ (id)menuItemTitle:;
+ (id)menuItemImageName:;
+ (id)menuItemLightImageURL:;
+ (id)menuItemDarkImageURL:;
+ (id)trackerName:;
+ (void)deleteMessage:;
+ (void)p_bizTrackDeleteMsg:convContext:;
+ (void)dataReportForDeleteActionOnCell:;
+ (void)old_dataReportForDeleteActionOnCell:;
@end
