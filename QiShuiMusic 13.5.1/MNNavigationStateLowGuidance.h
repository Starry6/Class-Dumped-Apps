@interface MNNavigationStateLowGuidance : MNNavigationStateGuidance
- (void)setGuidanceType:;
- (unsigned long long)type;
- (void)postEnterState;
@end
