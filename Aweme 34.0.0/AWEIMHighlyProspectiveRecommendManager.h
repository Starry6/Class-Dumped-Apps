@interface AWEIMHighlyProspectiveRecommendManager : NSObject
@property (nonatomic) q cursor;
@property (nonatomic) q totalCount;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSArray viewModels;
- (void)loadMoreWithCompletion:;
- (void)removeRecommendCellWithModel:;
- (long long)cursor;
- (long long)totalCount;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setViewModels:;
- (id)viewModels;
- (void)setTotalCount:;
+ (id)sharedInstance;
@end
