@interface SASProximitySessionTransport : NSObject
@property (nonatomic) @? receivedDataBlock;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)sendData:response:;
- (id)receivedDataBlock;
- (void)setReceivedDataBlock:;
@end
