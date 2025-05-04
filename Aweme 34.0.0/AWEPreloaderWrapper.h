@interface AWEPreloaderWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (unsigned long long)getVSResolution:;
+ (long long)getVSVideoFirstHighlight:;
+ (void)checkOutPreloadStrategyScene:;
+ (void)pausePreloadStrategyScene:;
+ (void)resumePreloadStrategyScene:;
+ (id)createPriorityStrategyMediaWithModel:bitrateSelectModel:preloadPriorityLevel:tag:preloadSize:preloadCustomPath:preloadCompletedBlock:;
+ (void)addLowPriorityTaskWithModels:;
+ (id)createLowPriorityStrategyMediaWithModel:bitrateSelectModel:preloadCompletedBlock:;
+ (BOOL)isEnableDash:;
+ (id)createStrategyMediaWithModel:bitrateSelectModel:preloadCompletedBlock:;
+ (double)awe_getPreloadSizeFactor:;
+ (double)awe_getPreloadSize:bitrateSelectModel:;
+ (BOOL)needUseVSEpisodeModel:;
+ (id)safe_getURI:;
+ (id)getVSEpisodeMainUrl:;
+ (id)getVSVideoEnginModel:;
+ (double)awe_getVSMultiplierOfPreloadSize:;
+ (id)awe_getVSEpisodeEngineModel:;
+ (void)awe_businessEventStrategyScene:;
+ (void)awe_requestEventPreloadStrategyScene:;
+ (void)preloadEnd:bitrate:error:block:logStr:;
+ (void)preloadDidStart:bsModel:info:;
@end
