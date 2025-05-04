@interface AWEFeedMateCardInsertContext : NSObject
@property (nonatomic) NSArray feedDataSource;
@property (nonatomic) q feedCurrentIndex;
@property (nonatomic) BOOL loadMoreHasMore;
@property (nonatomic) BOOL isRefresh;
- (void)setFeedDataSource:;
- (void)setFeedCurrentIndex:;
- (void)setLoadMoreHasMore:;
- (id)feedDataSource;
- (long long)feedCurrentIndex;
- (BOOL)loadMoreHasMore;
- (BOOL)isRefresh;
- (void).cxx_destruct;
- (void)setIsRefresh:;
@end
