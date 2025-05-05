@interface UIDraggingSystemSession : NSObject
@property (nonatomic) UIDraggingSystemSessionInfo info;
@property (nonatomic) UIDraggingSystemTouchRoutingPolicy routingPolicy;
@property (nonatomic) <_DUIServerSessionSystemApp> serverSession;
@property (nonatomic) BOOL commandeered;
- (void)setInfo:;
- (void).cxx_destruct;
- (id)info;
- (id)_serverSession;
- (id)routingPolicy;
- (void)setRoutingPolicy:;
- (void)commandeerImmediately;
- (void)setCommandeered:;
- (unsigned long long)_indexOfDragItemInSession:;
- (void)loadURLForItem:completion:;
- (void)loadUserActivityForItem:completion:;
- (BOOL)isCommandeered;
- (void)setServerSession:;
@end
