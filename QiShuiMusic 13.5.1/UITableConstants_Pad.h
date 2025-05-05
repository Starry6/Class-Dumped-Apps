@interface UITableConstants_Pad : UITableConstants_IOS
- (BOOL)supportsUserInterfaceStyles;
- (double)defaultRowHeightForTableView:;
- (double)defaultRowHeightForTableView:cellStyle:;
- (double)minimumContentViewHeightForFont:traitCollection:;
- (id)defaultLayoutMarginsForCell:inTableView:;
- (id)defaultCellBackgroundPropertiesForTableViewStyle:state:;
- (id)defaultSidebarCellBackgroundPropertiesWithState:traitCollection:isAccompanied:;
+ (id)sharedConstants;
@end
