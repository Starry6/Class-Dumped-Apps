@interface AKCATiburonRequestReporter : AKCAReporter
- (id)initWithRequestContext:;
- (void)didCompleteWithAuthorization:error:;
@end
