@interface NetworkPerformanceFeed : NSObject
@property (nonatomic) @ delegate;
- (void)dealloc;
- (BOOL)watchpointOn:forIdentifier:andKey:onThreshold:withOptions:uponHit:;
- (BOOL)getPreferCellOverWiFiWithOptions:reply:;
- (void)setDelegate:;
- (id)_routeMetricsPresentationFromRoll:source:since:isKnownGood:isLowInternetDL:isLowInternetUL:isHotSpot:;
- (BOOL)predictWaitUntilKnownGoodNetworkFor:matchSignature:reply:;
- (BOOL)setPreferCellOverWiFiWithOptions:reply:;
- (BOOL)usageConsultOn:onlyRelativeToReferencePoint:reply:;
- (id)_flowMetricsPresentationFromRoll:source:;
- (BOOL)setReferencePoint:reply:;
- (id)_normalizedOpts:toNetwork:;
- (BOOL)_rollRouteMetricsValuesFromDict:toDict:forKey:;
- (id)_formatWatchpointHit:;
- (id)delegate;
- (BOOL)resetDataForKeys:reply:;
- (void).cxx_destruct;
- (BOOL)fullScorecardFor:options:reply:;
- (id)initWithWorkspace:;
- (BOOL)_rollFlowMetricsValuesFromDict:toDict:forKey:andRequest:;
- (id)_formatInstantRouteMetrics:;
- (void)setQueue:;
- (void)_consultReturn:advice:;
@end
