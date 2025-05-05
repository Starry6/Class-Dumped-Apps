@interface ASDTestFlightServiceExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginRequestWithExtensionContext:;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceivePushToken:reply:;
- (void)didReceivePushMessages:reply:;
- (void)reloadAppsFromServerWithReply:;
- (void)invokeCommand:withArguments:reply:;
- (void)didReachTerminalPhaseWithBetaBundleID:terminalPhase:error:reply:;
@end
