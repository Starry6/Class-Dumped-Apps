@interface WBSSafariBookmarksSyncAgentConnection : NSObject
@property (nonatomic) <WBSSafariBookmarksSyncAgentProtocol> remoteObjectProxy;
- (id)init;
- (void)_setUpConnectionIfNeeded;
- (id)remoteObjectProxy;
- (void).cxx_destruct;
- (void)_connectionDidInvalidate;
@end
