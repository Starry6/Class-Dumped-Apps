@interface FLEXGlobalsSection : FLEXTableViewSection
@property (nonatomic) NSArray rows;
@property (nonatomic) NSArray allRows;
- (id)objectAtIndexedSubscript:;
- (void)setAllRows:;
- (long long)numberOfRows;
- (void)setFilterText:;
- (void)reloadData;
- (BOOL)canSelectRow:;
- (id)didSelectRowAction:;
- (id)viewControllerToPushForRow:;
- (void)configureCell:forRow:;
- (id)rows;
- (void)setRows:;
- (id)allRows;
- (void).cxx_destruct;
+ (id)title:rows:;
@end
