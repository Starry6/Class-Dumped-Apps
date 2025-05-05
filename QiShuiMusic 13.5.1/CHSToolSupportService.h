@interface CHSToolSupportService : NSObject
@property (nonatomic) CHSToolServiceConnection connection;
- (id)init;
- (id)connection;
- (void).cxx_destruct;
- (id)initWithConnection:;
- (void)cacheDescriptorsForBundleIdentifier:completion:;
- (void)listStateCaptureIdentifiersWithCompletion:;
- (void)fetchStateWithCompletion:;
- (void)fetchStateForItemWithIdentifier:completion:;
- (void)extensionInfoForBundleIdentifier:completion:;
- (void)extensionInfo:;
- (void)widgetsWithTimelines:;
- (void)timelineForWidgetKey:completion:;
- (void)resetCaches:completion:;
- (void)reloadTimelinesOfKind:containedIn:reason:completion:;
- (void)expireLocationGracePeriods;
- (void)contentURLForActivityID:completion:;
@end
