@interface AVPlayerInterstitialEventController : AVPlayerInterstitialEventMonitor
@property (nonatomic) NSArray events;
- (void)cancelCurrentEventWithResumptionOffset:;
- (void)dealloc;
- (void)setEvents:;
- (id)initWithPrimaryPlayer:;
+ (id)interstitialEventControllerWithPrimaryPlayer:;
@end
