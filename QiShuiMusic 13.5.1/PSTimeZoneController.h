@interface PSTimeZoneController : UITableViewController
@property (nonatomic) UISearchController searchController;
@property (nonatomic) PSSpecifier specifier;
@property (nonatomic) PSListController parentController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSearchController:;
- (void)setParentController:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)updateSearchResultsForSearchController:;
- (id)parentController;
- (void)setSpecifier:;
- (id)specifier;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)searchController;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (id)currentTimeZoneCityName;
+ (void)setTimeZone:;
@end
