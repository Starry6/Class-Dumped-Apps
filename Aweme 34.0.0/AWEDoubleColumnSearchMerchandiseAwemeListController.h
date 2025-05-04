@interface AWEDoubleColumnSearchMerchandiseAwemeListController : AWEListDataController
@property (nonatomic) <AWEDoubleColumnSearchMerchandiseAwemeListControllerDataSource> manager;
@property (nonatomic) NSArray helperItems;
@property (nonatomic) q initialIndex;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)helperItems;
- (id)helperItemsFromCurrentManager;
- (void)setHelperItems:;
- (id)indexPathOfOffset:;
- (long long)indexOfAweme:;
- (id)awemeWithIndexPath:offset:;
- (void)setManager:;
- (id)manager;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)initWithManager:;
- (long long)initialIndex;
- (void)setInitialIndex:;
+ (id)awemeListWithMerchandiseModel:;
+ (id)awemeWithMerchandiseModel:;
@end
