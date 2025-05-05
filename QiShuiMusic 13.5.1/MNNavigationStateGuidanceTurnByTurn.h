@interface MNNavigationStateGuidanceTurnByTurn : MNNavigationStateGuidance
- (void)setGuidanceType:;
- (unsigned long long)type;
- (void)postEnterState;
- (void)setFullGuidanceMode:;
@end
