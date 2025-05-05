@interface AVScrubbingGestureController : NSObject
@property (nonatomic) Q state;
@property (nonatomic) <AVScrubbingGestureControllerDelegate> delegate;
@property (nonatomic) AVPlayerController playerController;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL scrubsHaveMomentum;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setScrubsHaveMomentum:;
- (BOOL)enabled;
- (BOOL)scrubbingGesturePlatformAdapterIsActivelyScrubbing:;
- (id)configurationForScrubbingGesturePlatformAdapter:;
- (id)playerController;
- (void)setDelegate:;
- (unsigned long long)state;
- (id)delegate;
- (void)setPlayerController:;
- (void)setEnabled:;
- (BOOL)scrubsHaveMomentum;
- (void).cxx_destruct;
- (void)reset;
- (void)scrubbingGesturePlatformAdapterDidBeginScrubbing:;
- (void)scrubbingGesturePlatformAdapterDidContinueScrubbing:;
- (id)initWithPlatformAdapter:;
- (void)scrubbingGesturePlatformAdapterDidEndScrubbing:;
@end
