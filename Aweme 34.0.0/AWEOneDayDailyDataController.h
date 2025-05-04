@interface AWEOneDayDailyDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString userID;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)initWithUserID:;
- (BOOL)canLoadMore;
- (void)mergeDailyStory:;
- (void)filterDeletedStory:isNewest:;
- (void)requestDeleteStory:completeBlock:;
- (id)cursor;
- (id)userID;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)setUserID:;
@end
