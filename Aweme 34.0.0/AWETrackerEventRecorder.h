@interface AWETrackerEventRecorder : NSObject
@property (nonatomic) NSMutableArray hostAcceptedEvents;
@property (nonatomic) NSMutableArray sdkInitiatedEvents;
@property (nonatomic) NSMutableArray sdkStoredEvents;
@property (nonatomic) NSMutableArray sdkDiscardedEvents;
@property (nonatomic) Q hostAcceptedEventsLimit;
@property (nonatomic) Q sdkInitiatedEventsLimit;
@property (nonatomic) Q sdkStoredEventsLimit;
@property (nonatomic) Q sdkDiscardedEventsLimit;
- (void)onHostEventAccept:params:;
- (void)setHostAcceptedEventsLimit:;
- (void)setSdkInitiatedEventsLimit:;
- (void)setSdkStoredEventsLimit:;
- (void)setSdkDiscardedEventsLimit:;
- (void)onSDKEventInitialized:;
- (void)onSDKEventStored:;
- (void)onSDKEventDiscarded:withError:;
- (unsigned long long)hostAcceptedEventsLimit;
- (id)hostAcceptedEvents;
- (unsigned long long)sdkInitiatedEventsLimit;
- (id)sdkInitiatedEvents;
- (unsigned long long)sdkStoredEventsLimit;
- (id)sdkStoredEvents;
- (unsigned long long)sdkDiscardedEventsLimit;
- (id)sdkDiscardedEvents;
- (void)onSDKEventUploaded:;
- (void)setHostAcceptedEvents:;
- (void)setSdkInitiatedEvents:;
- (void)setSdkStoredEvents:;
- (void)setSdkDiscardedEvents:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
