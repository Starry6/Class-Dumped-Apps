@interface AWEFavoriteChallengeDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) AWEChallengeModel justRemovedModel;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setJustRemovedModel:;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:;
- (BOOL)addAwemeWithItemID:;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
