@interface MNNavigationStateNoDestination : MNNavigationState
- (void)setRoutesForPreview:selectedRouteIndex:;
- (void)startNavigationWithDetails:activeBlock:;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)type;
@end
