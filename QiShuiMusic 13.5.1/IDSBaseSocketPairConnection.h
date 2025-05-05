@interface IDSBaseSocketPairConnection : NSObject
@property (nonatomic) NSInteger socket;
- (void)setDestination:;
- (void)dealloc;
- (void)start;
- (int)socket;
- (void)endSession;
- (void).cxx_destruct;
- (void)_callDelegatesWithBlock:;
- (id)initWithQueue:delegate:;
- (BOOL)sendData:;
- (id)initWithSocket:queue:delegate:;
- (id)initWithSocket:queue:delegate:start:;
- (void)_processBytesAvailable;
- (void)_sendToConnectedSocket;
- (void)_setupWriteSource;
@end
