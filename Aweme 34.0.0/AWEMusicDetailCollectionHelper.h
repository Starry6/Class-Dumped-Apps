@interface AWEMusicDetailCollectionHelper : AWEMusicDetailFeatureHelper
@property (nonatomic) BOOL isCollectRequesting;
@property (nonatomic) q retryCount;
@property (nonatomic) @? collectionDidChangeHandler;
- (void)setCollectionDidChangeHandler:;
- (void)p_collectWithModel:updateUIBlock:;
- (void)trackCollectMusicWithModel:isCollected:;
- (void)trackCollectionSongWithModel:isCollected:;
- (void)trackSearchFavouriteWithModel:isCollected:;
- (void)p_collectWithModel:retry:updateUIBlock:;
- (void)setIsCollectRequesting:;
- (void)trackCollectMusicPerformanceWithModel:toCollect:extraParams:;
- (void)collectWithModel:updateUIBlock:;
- (void)trackDidTapFavouriteHint;
- (BOOL)isCollectRequesting;
- (id)collectionDidChangeHandler;
- (void)setRetryCount:;
- (long long)retryCount;
- (void).cxx_destruct;
+ (id)helperWithDataContext:collectionDidChangeHandler:;
@end
