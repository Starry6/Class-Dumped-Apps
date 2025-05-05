@interface FLEXTableViewSection : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) q numberOfRows;
@property (nonatomic) NSDictionary cellRegistrationMapping;
@property (nonatomic) NSString filterText;
- (long long)numberOfRows;
- (void)reloadData;
- (void)reloadData:;
- (void)setTable:section:;
- (id)cellRegistrationMapping;
- (BOOL)canSelectRow:;
- (id)didSelectRowAction:;
- (id)viewControllerToPushForRow:;
- (id)didPressInfoButtonAction:;
- (id)reuseIdentifierForRow:;
- (id)menuTitleForRow:;
- (id)menuSubtitleForRow:;
- (id)menuItemsForRow:sender:;
- (id)copyMenuItemsForRow:;
- (id)titleForRow:;
- (id)subtitleForRow:;
- (id)title;
- (id)filterText;
- (void)setFilterText:;
- (void).cxx_destruct;
@end
