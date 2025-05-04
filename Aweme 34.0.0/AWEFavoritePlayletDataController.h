@interface AWEFavoritePlayletDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) AWEPlayletInfoModel justRemovedModel;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setJustRemovedModel:;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:;
- (void)fetchDataWithCompletion:isLoadmore:;
- (BOOL)addAwemeWithItemID:;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
