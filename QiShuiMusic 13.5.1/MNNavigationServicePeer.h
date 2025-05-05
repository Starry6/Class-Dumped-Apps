@interface MNNavigationServicePeer : GEONavdPeer
@property (nonatomic) NSString peerIdentifier;
@property (nonatomic) NSInteger processIdentifier;
- (id)peerIdentifier;
- (void)clearConnection;
- (BOOL)isEntitled;
- (id)auditToken;
- (int)processIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConnection:;
@end
