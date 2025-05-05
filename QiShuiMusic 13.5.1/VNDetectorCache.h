@interface VNDetectorCache : NSObject
@property (nonatomic) <VNDetectorCacheDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)evictAllDetectors;
- (id)detectorOfType:configuredWithOptions:error:;
- (void)cacheDetector:;
- (id)loadedDetectors;
- (void)setDelegate:;
- (id)detectorOfClass:configuredWithOptions:error:;
- (void)evictDetectorsPassingTest:;
- (id)delegate;
- (void).cxx_destruct;
- (void)releaseDetectorsThatCanBeReplacedByDetectorOfClass:withConfiguration:;
@end
