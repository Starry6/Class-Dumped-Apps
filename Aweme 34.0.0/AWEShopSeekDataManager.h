@interface AWEShopSeekDataManager : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString POIId;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString userID;
@property (nonatomic) <AWEHttpTask> currentFilteringTask;
- (id)secUserID;
- (void)setSecUserID:;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)removeWithItemID:;
- (void)setPOIId:;
- (void)constructDataSourceWithResponseModel:error:isLoadMore:;
- (id)p_fetchIsLoadMore:completion:;
- (void)setCurrentFilteringTask:;
- (id)paramsIsLoadMore:;
- (id)POIId;
- (id)initWithPOIId:secUserID:userID:;
- (void)refreshPOIId:secUserID:userID:;
- (id)currentFilteringTask;
- (id)cursor;
- (id)userID;
- (void)removeAll;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
- (void)setUserID:;
@end
