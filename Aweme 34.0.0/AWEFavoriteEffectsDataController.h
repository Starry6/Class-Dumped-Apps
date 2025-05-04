@interface AWEFavoriteEffectsDataController : AWEListDataController
@property (nonatomic) q minCursor;
@property (nonatomic) q maxCursor;
@property (nonatomic) AWENewFaceStickerModel justRemovedModel;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (long long)minCursor;
- (long long)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (void)setJustRemovedModel:;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:;
- (BOOL)addAwemeWithItemID:;
- (void)refreshWithCompletion:refreshType:;
- (id)user;
- (void)setUser:;
- (id)init;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
+ (id)paramForEffectChannel;
@end
