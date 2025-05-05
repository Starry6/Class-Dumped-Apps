@interface GEORouteHypothesisMonitorWalkingDriving : GEORouteHypothesisMonitor
- (void)_recalculateETAWithRouteMatch:;
- (void)_fetchETAWithRouteMatch:;
- (void)checkRouteForLocation:;
- (void)_sendETARequestWithRouteMatch:updater:;
- (BOOL)_checkForArrival:routeMatch:;
@end
