@interface AWETeenAlbumCollectListDataController : AWEListDataController
@property (nonatomic) q cursor;
@property (nonatomic) NSString pageToken;
@property (nonatomic) NSMutableArray justRemovedModelList;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)pageToken;
- (void)setPageToken:;
- (void)p_loadAlbumCollectListCompletion:;
- (id)justRemovedModelList;
- (BOOL)addAwemeWithAlbumID:;
- (void)removeWithAlbumID:;
- (void)setJustRemovedModelList:;
- (long long)cursor;
- (id)init;
- (void)removeAll;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
