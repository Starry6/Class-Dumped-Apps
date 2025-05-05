@interface MRIDSClientConnection : MRProtocolClientConnection
@property (nonatomic) I discoveryMode;
- (void)setDiscoveryMode:;
- (unsigned int)discoveryMode;
- (id)initWithConnection:;
@end
