@interface CTConnectionPair : NSObject
- (void)dealloc;
- (BOOL)start;
- (void).cxx_destruct;
- (id)initWithQueue:delegate:endpoint1:parameters1:endpoint2:parameter2:;
- (void)receiveData:;
- (void)updatePairState:;
- (void)connectionStateChanged:connectionId:;
- (BOOL)sendData:usingConnection:completion:;
@end
