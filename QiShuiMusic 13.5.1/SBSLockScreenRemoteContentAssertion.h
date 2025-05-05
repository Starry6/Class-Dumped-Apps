@interface SBSLockScreenRemoteContentAssertion : SBSLockScreenContentAssertion
- (BOOL)_supportsReacquisition;
+ (id)acquireRemoteContentAssertionWithDefinition:errorHandler:;
+ (id)acquireWakeToRemoteAlertAssertionWithRemoteDefinition:errorHandler:;
@end
