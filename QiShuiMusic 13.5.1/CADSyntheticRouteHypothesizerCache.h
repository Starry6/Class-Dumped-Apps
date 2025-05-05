@interface CADSyntheticRouteHypothesizerCache : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) NSMutableDictionary eventExternalURLToSyntheticRouteHypothesizerMap;
- (id)workQueue;
- (void).cxx_destruct;
- (id)_init;
- (id)syntheticRouteHypothesizerForEventExternalURL:;
- (void)addSyntheticRouteHypothesizer:forEventExternalURL:;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:;
- (id)eventExternalURLToSyntheticRouteHypothesizerMap;
+ (id)sharedInstance;
@end
