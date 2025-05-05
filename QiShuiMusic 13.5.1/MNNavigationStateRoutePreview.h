@interface MNNavigationStateRoutePreview : MNNavigationState
- (void)stopNavigationWithReason:;
- (void)pauseRealtimeUpdatesForSubscriber:;
- (void)setRoutesForPreview:selectedRouteIndex:;
- (void)startNavigationWithDetails:activeBlock:;
- (void)resumeRealtimeUpdatesForSubscriber:;
- (unsigned long long)desiredLocationProviderType;
- (void)enterState;
- (unsigned long long)type;
- (void).cxx_destruct;
- (void)leaveState;
- (BOOL)requiresHighMemoryThreshold;
- (BOOL)shouldClearStoredRoutes;
- (id)traceManager;
- (id)simulationLocationProvider;
- (id)initWithStateManager:previewRoutes:selectedRouteIndex:;
@end
