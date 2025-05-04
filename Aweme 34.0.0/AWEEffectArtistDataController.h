@interface AWEEffectArtistDataController : AWEListDataController
@property (nonatomic) q count;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString userID;
@property (nonatomic) NSNumber cursorSource;
- (void)loadMoreWithCompletion:;
- (id)initWithUserID:;
- (BOOL)canLoadMore;
- (void)setCursorSource:;
- (id)cursorSource;
- (long long)toppedEffectModelCount;
- (long long)hiddenEffectModelCount;
- (void)pinToTopEffectModel:withComletion:;
- (void)hideEffectModel:withComletion:;
- (void)removeAwemeCoverEffectModel:withComletion:;
- (id)cursor;
- (id)userID;
- (void)setCount:;
- (long long)count;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setUserID:;
@end
