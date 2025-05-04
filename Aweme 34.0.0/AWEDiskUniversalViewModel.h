@interface AWEDiskUniversalViewModel : AWEDiskCleanViewModel
@property (nonatomic) AWEPerfResourceManager resourceManager;
@property (nonatomic) BOOL cacheCalculated;
- (void)constructAllDatas;
- (id)initWithDiskOverallCalculateProgress:overallCalculateCompletion:businessCalculateCompletion:;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)cleanResourceWithCleanType:completion:;
- (void)cleanResourceWithCleanType:checkCancelForProgress:completion:;
- (id)constructCleanModelWithTitle:detail:desc:type:haveCache:;
- (void)initHeaderData;
- (void)prepareOfflineVideoData;
- (void)cleanOfflineVideo;
- (id)appSizePercentInfoString;
- (BOOL)cacheCalculated;
- (void)setCacheCalculated:;
- (void)cleanCacheAndOffline;
- (void)dealloc;
- (id)resourceManager;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)setResourceManager:;
@end
