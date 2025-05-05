@interface IMCollaborationNoticeDispatcher : NSObject
@property (nonatomic) IMDaemonController<IMDaemonProtocol> daemon;
- (void)setDaemon:;
- (id)initWithDaemon:;
- (id)init;
- (id)daemon;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void).cxx_destruct;
- (id)_listenerID;
- (void)sendClearNotice:toHandles:completion:;
- (void)sendNotice:toHandles:completion:;
- (void)setUpConnectionToDaemon;
@end
