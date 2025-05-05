@interface IESECListDataController : NSObject
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL loadmoreHasMore;
- (BOOL)loadmoreHasMore;
- (void)initFetchWithCompletion:;
- (BOOL)isRequestOnAir;
- (void)loadMoreWithCompletion:;
- (void)setIsRequestOnAir:;
- (void)setLoadmoreHasMore:;
- (void)setDataSource:;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
