@interface AMSURLSecurityPolicy : NSObject
@property (nonatomic) q trustMode;
@property (nonatomic) NSSet pinnedCertificates;
- (void).cxx_destruct;
- (id)initWithTrustMode:;
- (id)initWithTrustMode:pinnedCertificated:;
- (BOOL)evaluateTrust:forTask:;
- (BOOL)_evaluateExtendedValidationWithTrust:forTask:;
- (BOOL)_evaluatePinnedCertificatesWithTrust:forTask:;
- (BOOL)_shouldSkipValidation;
- (long long)trustMode;
- (void)setTrustMode:;
- (id)pinnedCertificates;
- (void)setPinnedCertificates:;
+ (id)defaultPolicy;
@end
