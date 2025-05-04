@interface AWEDiskUniversalViewModelV2 : AWEDiskCleanViewModel
@property (nonatomic) AWEPerfResourceManager resourceManager;
- (void)constructAllDatas;
- (id)initWithDiskOverallCalculateProgress:overallCalculateCompletion:businessCalculateCompletion:;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)cleanResourceWithCleanType:completion:;
- (void)cleanResourceWithCleanType:checkCancelForProgress:completion:;
- (id)constructCleanModelWithTitle:detail:desc:type:haveCache:;
- (void)initHeaderData;
- (void)prepareOfflineVideoData;
- (void)cleanCacheWithCancelForCleanSize:;
- (void)trackCleanOfflineVideo;
- (void)dealloc;
- (id)resourceManager;
- (void).cxx_destruct;
- (void)setResourceManager:;
@end
