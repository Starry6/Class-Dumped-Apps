@interface NEAppPushProvider : NEProvider
@property (nonatomic) NSDictionary providerConfiguration;
- (id)init;
- (void)startWithCompletionHandler:;
- (void)start;
- (id)providerConfiguration;
- (void).cxx_destruct;
- (void)setProviderConfiguration:;
- (void)stopWithReason:completionHandler:;
- (void)reportIncomingCallWithUserInfo:;
- (void)handleTimerEvent;
@end
