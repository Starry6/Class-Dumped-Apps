@interface AWEDPDismissLoginStep : AWEWorkflowStep
- (void)onStep:linkSession:;
+ (void)dismissLoginPageIfNeeded:;
@end
