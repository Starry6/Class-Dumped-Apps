@interface AWEImageDetectorProviderImpl : NSObject
@property (nonatomic) VEImageDetector imageDetector;
@property (nonatomic) q useCount;
@property (nonatomic) NSTimer delayReleaseTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)releaseImageDetector;
- (id)imageDetector;
- (void)setImageDetector:;
- (void)p_invalidateDelayReleaseTimerIfNeeded;
- (id)delayReleaseTimer;
- (void)p_releaseImageDetectorIfNeeded;
- (void)setDelayReleaseTimer:;
- (void)provideImageDetectorWithCompletion:;
- (void)tryReleaseImageDetector;
- (id)init;
- (void)dealloc;
- (long long)useCount;
- (void)setUseCount:;
- (void).cxx_destruct;
- (void)applicationDidReceiveMemoryWarningNotification:;
@end
