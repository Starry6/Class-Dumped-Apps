@interface AFPowerAssertionManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (void)_releasePowerAssertion;
- (void)_createPowerAssertion;
- (void)assertionCoordinator:didAddAssertion:isFirstAssertion:;
- (void)assertionCoordinator:didActivateAssertion:isFirstAssertion:;
- (void)assertionCoordinator:didDeactivateAssertion:isLastAssertion:;
- (void)assertionCoordinator:didRemoveAssertion:isLastAssertion:;
- (void)takePowerAssertionWithName:;
- (void)releasePowerAssertionWithName:;
- (void)releaseAllPowerAssertions;
- (void)_watchdogTimedOut;
- (void)_reportLeakedPowerAssertion;
@end
