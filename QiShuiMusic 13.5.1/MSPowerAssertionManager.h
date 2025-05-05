@interface MSPowerAssertionManager : NSObject
@property (nonatomic) BOOL isBusy;
@property (nonatomic) BOOL isAssertingPowerAssertion;
@property (nonatomic) I assertionID;
@property (nonatomic) NSInteger busyCount;
@property (nonatomic) NSInteger UIBusyCount;
- (void)retainBusy;
- (void)setIsBusy:;
- (void)toggleAssertion;
- (void)retainUIBusy;
- (BOOL)isBusy;
- (void)_recomputePowerAssertion;
- (int)busyCount;
- (void)releaseBusy;
- (int)UIBusyCount;
- (void)setUIBusyCount:;
- (void)releaseUIBusy;
- (BOOL)isAssertingPowerAssertion;
- (void)setBusyCount:;
- (void)setIsAssertingPowerAssertion:;
- (void)_assertPowerAssertion;
- (void)setAssertionID:;
- (void)_deassertPowerAssertion;
- (unsigned int)assertionID;
+ (id)sharedManager;
@end
