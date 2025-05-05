@interface AKCAPiggybackReporter : AKCAReporter
- (id)initWithRequestID:;
- (void)didCircleTimeout;
- (void)didFinishAccepting;
- (void)didCancelRequesting;
- (void)didEscapeRequesting;
- (id)piggybackResultString:;
@end
