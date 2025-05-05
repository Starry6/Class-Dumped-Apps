@interface FLEXKeychainViewController : FLEXFilteringTableViewController
@property (nonatomic) FLEXMutableListSection section;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)viewDidLoad;
- (id)makeSections;
- (id)nonemptySections;
- (void)reloadSections;
- (void)refreshSectionTitle;
- (void)reloadData;
- (id)queryForItemAtIndex:;
- (void)deleteItem:;
- (void)trashPressed:;
- (void)confirmClearKeychain;
- (void)addPressed;
- (void)tableView:commitEditingStyle:forRowAtIndexPath:;
- (BOOL)tableView:shouldHighlightRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)section;
- (void).cxx_destruct;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryViewController:;
@end
