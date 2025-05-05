@interface MNNavigationStateRoutePreviewGuidance : MNNavigationStateGuidance
- (void)stopNavigationWithReason:;
- (void)setGuidanceType:;
- (void)enterState;
- (unsigned long long)type;
- (id)initWithStateManager:navigationSessionManager:startDetails:;
@end
