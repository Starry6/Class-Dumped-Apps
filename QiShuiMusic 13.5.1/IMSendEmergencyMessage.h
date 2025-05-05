@interface IMSendEmergencyMessage : NSObject
@property (nonatomic) IMDaemonController<IMDaemonProtocol> daemon;
- (void)setDaemon:;
- (id)initWithDaemon:;
- (id)init;
- (id)daemon;
- (void)dealloc;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void)locationUpdateSent;
- (void).cxx_destruct;
- (void)sendEmergencyQuestionnaire:;
- (void)setUpConnectionToDaemaon;
@end
