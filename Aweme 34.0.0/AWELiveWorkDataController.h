@interface AWELiveWorkDataController : AWEListDataController
@property (nonatomic) NSString userID;
@property (nonatomic) NSString secUserID;
@property (nonatomic) q pageSize;
@property (nonatomic) q cursor;
@property (nonatomic) BOOL needReloadData;
@property (nonatomic) LiveTabResponse_Extra extraModel;
- (id)secUserID;
- (void)setSecUserID:;
- (void)loadMoreWithCompletion:;
- (id)extraModel;
- (void)initFetchWithCompletion:;
- (void)setExtraModel:;
- (void)loadMore:;
- (BOOL)needReloadData;
- (id)initWithUserID:secUserID:;
- (long long)cursor;
- (id)userID;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setUserID:;
- (void)refresh:;
- (long long)pageSize;
- (void)setPageSize:;
@end
