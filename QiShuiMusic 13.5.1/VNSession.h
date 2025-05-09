@interface VNSession : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)releaseCachedResources;
- (id)init;
- (void)detectorCache:didCacheDetector:;
- (void)dealloc;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:;
- (id)detectorOfType:configuredWithOptions:error:;
- (void)detectorCache:didEvictDetector:;
- (void)legacyForcedCleanupOfFacePipelineWithLevel:;
- (id)loadedDetectors;
- (id)trackerWithOptions:error:;
- (id)detectorOfClass:configuredWithOptions:error:;
- (BOOL)prepareForPerformingRequests:error:;
- (id)initWithCachingBehavior:;
- (id)createRPNTrackerResourcesConfiguredWithOptions:error:;
- (id)_cachedTrackerResourcesConfiguredWithOptions:;
- (id)trackerResourcesConfiguredWithOptions:error:;
- (void)releaseTracker:;
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:;
- (void)legacyForcedCleanupWithOptions:;
- (id)_cachedDetectorOfClass:configuredWithOptions:;
- (void).cxx_destruct;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:withConfiguration:;
- (void)releaseCachedResourcesWithCompletionBlock:;
- (void)_releaseDetectorsThatCanBeReplacedByDetectorOfClass:withConfiguration:;
- (void)legacyForcedCleanupOfScenePipelineWithLevel:;
+ (id)globalSession;
@end
