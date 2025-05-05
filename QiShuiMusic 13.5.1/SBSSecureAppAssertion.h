@interface SBSSecureAppAssertion : SBSLockScreenContentAssertion
@property (nonatomic) SBSLockScreenContentAssertion actualAssertion;
- (void)setActualAssertion:;
- (id)actualAssertion;
- (BOOL)_supportsReacquisition;
- (void).cxx_destruct;
+ (id)acquireSecureAppAssertionWithType:errorHandler:;
+ (id)acquireSecureAppAssertionWithType:supportedOrientations:errorHandler:;
@end
