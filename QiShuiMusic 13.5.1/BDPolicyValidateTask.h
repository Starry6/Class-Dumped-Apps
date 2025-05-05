@interface BDPolicyValidateTask : NSObject
@property (nonatomic) BDCertUnit certUnit;
- (id)certUnit;
- (unsigned long long)errorLevelOfCertUnit:withResult:inUnit:;
- (void)sendErrorEventWithCertUnit:error:errorLevel:;
- (void)sendEvent:startTime:error:errorLevel:extraInfo:;
- (void)setCertUnit:;
- (unsigned long long)shouldHandleError:forCert:inUnit:;
- (void)updateValidateResult:withStrategyUnitResult:errorLevel:;
- (id)validate;
- (id)eventWithType:;
- (void).cxx_destruct;
@end
