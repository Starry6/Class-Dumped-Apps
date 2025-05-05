@interface FLEXTableListViewController : FLEXFilteringTableViewController
@property (nonatomic) <FLEXDatabaseManager> dbm;
@property (nonatomic) NSString path;
@property (nonatomic) FLEXMutableListSection tables;
- (id)initWithPath:;
- (void)viewDidLoad;
- (id)makeSections;
- (void)reloadData;
- (void)queryButtonPressed;
- (void)showQueryInput:;
- (id)databaseManagerForFileAtPath:;
- (id)dbm;
- (id)path;
- (id)tables;
- (void).cxx_destruct;
+ (BOOL)supportsExtension:;
+ (id)supportedSQLiteExtensions;
+ (id)supportedRealmExtensions;
@end
