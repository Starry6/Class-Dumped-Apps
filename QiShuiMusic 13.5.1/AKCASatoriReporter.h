@interface AKCASatoriReporter : AKCAReporter
- (id)initWithRequestID:;
- (void)didCompleteWithSuccess:authorizationAlreadyComplete:;
- (void)didPerformVerificationWithSuccess:duration:;
- (void)didCompleteVerificationWithSuccess:duration:;
@end
