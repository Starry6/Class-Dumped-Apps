@interface IMReplyingRemoteDaemonProxy : NSProxy
@property (nonatomic) IMDaemonController daemonController;
@property (nonatomic) BOOL synchronousReplies;
- (id)methodSignatureForSelector:;
- (id)daemonController;
- (void).cxx_destruct;
- (void)forwardInvocation:;
- (id)initWithDaemonController:synchronousReplies:;
- (BOOL)synchronousReplies;
- (void)setSynchronousReplies:;
@end
