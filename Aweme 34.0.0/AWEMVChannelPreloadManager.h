@interface AWEMVChannelPreloadManager : NSObject
@property (nonatomic) NSString referString;
- (id)referString;
- (void)setReferString:;
- (id)preloadCutomHeader:;
- (id)preloadSettings;
- (void)cancelPrefetchVideo;
- (void)tryPrefetchVideo:;
- (void)preloadCoverWithModels:;
- (id)awemeModelsForPrefetch:dataSource:key:;
- (void)tryPrefetchVideo:group:preloadSize:;
- (long long)videoPreloadCount;
- (void)loopPrefetchVideo:dataSource:;
- (void)tryPrefetchVideo:dataSource:;
- (void)startPrefetchVideo:tag:customHeaderDic:preloadSize:group:successBlock:failureBlock:cancelBlock:;
- (void)cancelPrefetchVideoWithGroup:;
- (void)tryPrefetchSmallCardVideo:preloadSize:;
- (void)tryPrefetchLargeCardVideo:;
- (void)cancelPrefetchSmallCardVideo;
- (long long)listPreloadCount;
- (unsigned long long)largeCardVideoPreloadStrategy;
- (void).cxx_destruct;
+ (BOOL)isEnableDash:;
+ (void)preloadCoverWithBannerModels:;
@end
