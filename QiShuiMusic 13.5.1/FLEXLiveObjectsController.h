@interface FLEXLiveObjectsController : FLEXTableViewController
@property (nonatomic) NSDictionary instanceCountsForClassNames;
@property (nonatomic) NSDictionary instanceSizesForClassNames;
@property (nonatomic) NSArray allClassNames;
@property (nonatomic) NSArray filteredClassNames;
@property (nonatomic) NSString headerTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoad;
- (id)allClassNames;
- (void)reloadTableData;
- (void)refreshControlDidRefresh:;
- (void)updateHeaderTitle;
- (void)updateSearchResults:;
- (long long)numberOfSectionsInTableView:;
- (long long)tableView:numberOfRowsInSection:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)tableView:titleForHeaderInSection:;
- (void)tableView:didSelectRowAtIndexPath:;
- (id)instanceCountsForClassNames;
- (void)setInstanceCountsForClassNames:;
- (id)instanceSizesForClassNames;
- (void)setInstanceSizesForClassNames:;
- (id)filteredClassNames;
- (void)setFilteredClassNames:;
- (id)headerTitle;
- (void)setHeaderTitle:;
- (void).cxx_destruct;
+ (id)globalsEntryTitle:;
+ (id)globalsEntryViewController:;
@end
