@interface SBSLockScreenBackgroundContentAssertion : SBSLockScreenContentAssertion
- (BOOL)_supportsReacquisition;
+ (id)acquireBackgroundContentAssertionWithDefinition:errorHandler:;
@end
