@interface AWEIMSwiftImpl.NetworkStrategyController : HTSService
- (void)onServiceInit;
- (BOOL)isNeedDelaySendRequestWithPath:;
- (double)delayDurationWithPath:;
- (void)updateEnvironmentValue:forKey:;
- (id)init;
- (void).cxx_destruct;
@end
