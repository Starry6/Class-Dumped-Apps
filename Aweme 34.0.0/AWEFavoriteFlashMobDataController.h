@interface AWEFavoriteFlashMobDataController : AWEListDataController
@property (nonatomic) q cursor;
@property (nonatomic) NSArray dataArray;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (BOOL)isSameCollectedWithAModel:BModel:;
- (long long)cursor;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)dataArray;
- (void)setDataArray:;
@end
