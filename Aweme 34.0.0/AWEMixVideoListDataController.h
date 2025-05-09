@interface AWEMixVideoListDataController : AWEListDataController
@property (nonatomic) NSObject<OS_dispatch_queue> mixDataQueue;
@property (nonatomic) AWEMixVideoListDataNode currentRecommendNodeCache;
@property (nonatomic) AWEMixVideoLocalDataBase localDataBase;
@property (nonatomic) BOOL hasFilteredData;
@property (nonatomic) AWEMixVideoListDataNode currentNode;
@property (nonatomic) AWEMixVideoListDataNode currentRecommendNode;
@property (nonatomic) BOOL skipLocalCache;
@property (nonatomic) NSString mixAuthorID;
@property (nonatomic) @? requestFinishBlock;
@property (nonatomic) <AWEUserProFileAdVideoDataController> adVideoDataController;
@property (nonatomic) AWEMixVideoModel mixVideoModel;
@property (nonatomic) NSString mixVideoID;
@property (nonatomic) NSNumber minCursor;
@property (nonatomic) NSNumber maxCursor;
@property (nonatomic) NSString previousPage;
@property (nonatomic) BOOL hasRecommendMix;
@property (nonatomic) BOOL enabledLocalDataBase;
- (void)setLoadmoreHasMore:;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)setRefreshHasMore:;
- (void)setLoadPreviousHasPrevious:;
- (BOOL)refreshHasMore;
- (void)loadPreviousWithCompletion:;
- (BOOL)loadPreviousHasPrevious;
- (void)setRefreshHasPrevious:;
- (BOOL)refreshHasPrevious;
- (id)minCursor;
- (void)loadMoreFromEpisode:completion:;
- (id)maxCursor;
- (void)setMaxCursor:;
- (void)setMinCursor:;
- (long long)lastEpisode;
- (BOOL)hasRecommendMix;
- (void)setHasRecommendMix:;
- (id)adVideoDataController;
- (void)setAdVideoDataController:;
- (void)fetchWithCount:type:completion:;
- (id)mixVideoModel;
- (void)setMixVideoModel:;
- (void)setMixVideoID:;
- (void)loadPreviousWithDataType:completion:;
- (void)loadMoreWithDataType:completion:;
- (void)setupRecommendDataWithDataType:;
- (void)setMixAuthorID:;
- (id)mixAuthorID;
- (void)setSkipLocalCache:;
- (void)syncWith:;
- (id)sortArrayByExcuteDate:;
- (void)resetDataForEpisode:;
- (void)mixInnerLoadMoreFromEpisode:completion:;
- (void)syncWithAwemeModels:;
- (id)requestFinishBlock;
- (void)setRequestFinishBlock:;
- (id)mixVideoID;
- (BOOL)hasFilteredData;
- (void)setHasFilteredData:;
- (BOOL)enabledLocalDataBase;
- (void)setEnabledLocalDataBase:;
- (void)initFetchWithDataType:completion:;
- (void)refreshWithDataType:completion:;
- (void)loadMoreWithDataType:currentAwemeModel:completion:;
- (void)loadMoreFromEpisode:forSegment:completion:;
- (void)preloadMoreFromEpisode:;
- (BOOL)isLocalDataExistsFromEpisode:;
- (void)fetchWithCount:dataType:pullType:currentAwemeModel:completion:;
- (long long)firstEpisode;
- (BOOL)hasFirstMixVideoData;
- (BOOL)hasLastMixVideoData;
- (void)clearAndCacheCurrentRecommendNode;
- (BOOL)skipLocalCache;
- (id)currentRecommendNode;
- (void)setCurrentRecommendNode:;
- (id)mixDataQueue;
- (void)setMixDataQueue:;
- (void)setLocalDataBase:;
- (id)localDataBase;
- (void)setCurrentRecommendNodeCache:;
- (id)currentRecommendNodeCache;
- (id)getNodeWithDataType:;
- (void)fetchFinishSetDataSource:filteredArray:indexSet:;
- (void)trackCompilationListMonitorWithModel:dataType:mixType:error:;
- (void)fetchWithCount:dataType:pullDown:cursor:currentAwemeModel:completion:block:;
- (BOOL)compilationLogInfoEnabled;
- (id)videoMixDataSource;
- (id)init;
- (void)resetData;
- (id)description;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setDataSource:;
- (id)dataSource;
- (id)copyWithZone:;
- (id)previousPage;
- (void)setPreviousPage:;
- (void)setCurrentNode:;
- (id)currentNode;
@end
