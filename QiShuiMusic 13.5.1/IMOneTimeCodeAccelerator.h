@interface IMOneTimeCodeAccelerator : NSObject
@property (nonatomic) IMDaemonController<IMDaemonProtocol> daemon;
@property (nonatomic) @? updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;
- (void)setDaemon:;
- (id)daemon;
- (void)dealloc;
- (void)setRequestedOneTimeCodeStatusForConnection:;
- (id)updateBlock;
- (void)_incomingCodeUpdateFromDaemon:;
- (void)daemonControllerDidDisconnect;
- (BOOL)requestedOneTimeCodeStatusForConnection;
- (id)initWithDaemon:andBlock:;
- (void)daemonConnectionLost;
- (void)consumeCodeWithGuid:;
- (id)initWithBlockForUpdates:;
- (void)daemonControllerDidConnect;
- (void)daemonControllerWillConnect;
- (void).cxx_destruct;
- (void)setUpConnectionToDaemaon;
- (void)setUpdateBlock:;
@end
