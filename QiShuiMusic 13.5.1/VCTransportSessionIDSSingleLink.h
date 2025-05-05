@interface VCTransportSessionIDSSingleLink : VCTransportSessionIDS
- (int)onStart;
- (id)initWithNotificationQueue:reportingAgent:;
- (int)createVFD:forStreamType:;
- (void)handleLinkConnectedWithInfo:;
- (void)handleLinkDisconnectedWithInfo:;
- (int)updateTransportStream:;
@end
