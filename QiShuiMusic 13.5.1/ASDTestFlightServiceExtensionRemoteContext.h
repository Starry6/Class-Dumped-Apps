@interface ASDTestFlightServiceExtensionRemoteContext : ASDTestFlightServiceExtensionContext
@property (nonatomic) ASDTestFlightServiceExtension extensionInstance;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)serviceExtensionPerformCleanup;
- (id)extensionInstance;
- (void)setExtensionInstance:;
- (void)serviceExtensionTimeWillExpire;
- (void)didReceivePushToken:reply:;
- (void)didReceivePushMessages:reply:;
- (void)didReachTerminalPhaseWithBetaBundle:terminalPhase:error:reply:;
- (void)reloadAppsFromServerWithReply:;
- (void)invokeCommand:withArguments:reply:;
@end
