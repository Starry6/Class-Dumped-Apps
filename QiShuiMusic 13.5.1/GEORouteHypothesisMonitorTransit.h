@interface GEORouteHypothesisMonitorTransit : GEORouteHypothesisMonitor
- (id)routeName;
- (void)_recalculateETAWithRouteMatch:;
- (void)checkRouteForLocation:;
@end
