@interface PKTextInputAnalyticsController : NSObject
@property (nonatomic) NSTimer eventSourceTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)matchingAccumulatorNames;
- (void)didEndMatchingAccumulatorName:;
- (void)didBeginSession;
- (void)eventSourceDidChange:;
- (void)activePencilUsage:;
- (void)_dispatchAnalytics;
- (void)q_didBeginSession;
- (void)q_didEndMatchingAccumulatorName:inputMode:;
- (void)messageHandwritingAnalyticsWithProxyBlock:;
- (void)didUpdateToEventSource:;
- (void)_updateAnalyticsTracking;
- (void)_setupAnalyticsTimer;
- (id)eventSourceTimer;
- (void)setEventSourceTimer:;
+ (id)sharedInstance;
+ (void)beginObservingSessionAnalytics;
@end
