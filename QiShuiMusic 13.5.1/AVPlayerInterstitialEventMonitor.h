@interface AVPlayerInterstitialEventMonitor : NSObject
@property (nonatomic) AVPlayer primaryPlayer;
@property (nonatomic) AVQueuePlayer interstitialPlayer;
@property (nonatomic) NSArray events;
@property (nonatomic) AVPlayerInterstitialEvent currentEvent;
- (id)currentEvent;
- (id)init;
- (void)dealloc;
- (id)primaryPlayer;
- (void)_removeMonitorListeners;
- (id)makeCopyOf:immutable:;
- (id)initWithPrimaryPlayer:;
- (void).cxx_destruct;
- (id)interstitialPlayer;
- (void)_addMonitorListeners:;
- (id)events;
+ (id)interstitialEventMonitorWithPrimaryPlayer:;
@end
