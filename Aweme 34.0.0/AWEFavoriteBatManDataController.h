@interface AWEFavoriteBatManDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) AWEBatManTempModel justRemovedModel;
@property (nonatomic) AWEUserModel user;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setJustRemovedModel:;
- (id)justRemovedModel;
- (BOOL)removeWithItemID:;
- (BOOL)addAwemeWithItemID:;
- (void)decodeExtras:;
- (id)cursor;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
