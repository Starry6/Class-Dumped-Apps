@interface AKCATiburonRequestAttemptReporter : AKCAReporter
- (id)initWithRequestID:;
- (void)didCompleteWithAuthorization:error:;
@end
