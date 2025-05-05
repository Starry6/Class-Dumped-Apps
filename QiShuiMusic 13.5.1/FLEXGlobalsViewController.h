@interface FLEXGlobalsViewController : FLEXFilteringTableViewController
@property (nonatomic) NSArray sections;
@property (nonatomic) NSArray allSections;
@property (nonatomic) BOOL manuallyDeselectOnAppear;
- (void)viewDidLoad;
- (void)viewWillAppear:;
- (id)makeSections;
- (BOOL)manuallyDeselectOnAppear;
+ (id)globalsTitleForSection:;
+ (id)globalsEntryForRow:;
+ (id)defaultGlobalSections;
@end
