@interface AWEFavoriteMovieDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) AWEFavoriteCollectionModel justRemovedModel;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL onLongVideoInnerFeed;
@property (nonatomic) NSMutableArray awemeModelList;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setJustRemovedModel:;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:;
- (void)fetchDataWithCompletion:isLoadmore:;
- (BOOL)addAwemeWithItemID:;
- (void)setAwemeModelList:;
- (id)awemeModelList;
- (void)setOnLongVideoInnerFeed:;
- (BOOL)onLongVideoInnerFeed;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
