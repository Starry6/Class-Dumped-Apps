@interface FLEXTableContentViewController : UIViewController
@property (nonatomic) NSArray columns;
@property (nonatomic) NSMutableArray rows;
@property (nonatomic) NSString tableName;
@property (nonatomic) NSMutableArray rowIDs;
@property (nonatomic) <FLEXDatabaseManager> databaseManager;
@property (nonatomic) BOOL canRefresh;
@property (nonatomic) FLEXMultiColumnTableView multiColumnView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithColumns:rows:rowIDs:tableName:database:;
- (void)loadView;
- (void)viewDidLoad;
- (id)multiColumnView;
- (BOOL)canRefresh;
- (long long)numberOfColumnsInTableView:;
- (long long)numberOfRowsInTableView:;
- (id)columnTitle:;
- (id)rowTitle:;
- (id)contentForRow:;
- (double)multiColumnTableView:heightForContentCellInRow:;
- (double)multiColumnTableView:minWidthForContentCellInColumn:;
- (double)heightForTopHeaderInTableView:;
- (double)widthForLeftHeaderInTableView:;
- (void)multiColumnTableView:didSelectRow:;
- (void)multiColumnTableView:didSelectHeaderForColumn:sortType:;
- (void)willTransitionToTraitCollection:withTransitionCoordinator:;
- (void)setupToolbarItems;
- (void)trashPressed;
- (void)addPressed;
- (void)executeStatementAndShowResult:completion:;
- (void)reloadTableDataFromDB;
- (id)columns;
- (id)rows;
- (void)setRows:;
- (id)tableName;
- (id)rowIDs;
- (void)setRowIDs:;
- (id)databaseManager;
- (void)setMultiColumnView:;
- (void).cxx_destruct;
+ (id)columns:rows:rowIDs:tableName:database:;
+ (id)columns:rows:;
@end
