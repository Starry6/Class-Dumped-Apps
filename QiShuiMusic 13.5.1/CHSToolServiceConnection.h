@interface CHSToolServiceConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeClient:;
- (void)addClient:;
- (id)init;
- (void)_queue_removeClient:;
- (id)_queue_remoteTarget;
- (void)_queue_invalidateConnection;
- (void)_queue_createConnection;
- (void).cxx_destruct;
- (void)_queue_addClient:;
- (id)_init;
- (id)cacheDescriptorsForBundleIdentifier:completion:;
- (id)listStateCaptureIdentifiersWithCompletion:;
- (id)fetchStateWithCompletion:;
- (id)fetchStateForItemWithIdentifier:completion:;
- (id)extensionInfoForBundleIdentifier:completion:;
- (id)extensionInfo:;
- (id)widgetsWithTimelines:;
- (id)timelineForWidgetKey:completion:;
- (id)resetCaches:completion:;
- (id)reloadTimelinesOfKind:containedIn:reason:completion:;
- (id)expireLocationGracePeriods;
- (id)contentURLForActivityID:completion:;
+ (id)sharedInstance;
@end
