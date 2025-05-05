@interface AVAirTransportStreams : AVAirTransport
@property (nonatomic) NSInputStream inputStream;
@property (nonatomic) NSOutputStream outputStream;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)inputStream;
- (void)open;
- (long long)_writeData:;
- (BOOL)canWrite;
- (void).cxx_destruct;
- (id)outputStream;
- (void)stream:handleEvent:;
- (id)description;
- (void)invalidate;
- (id)initWithInput:output:;
- (id)_readDataNonBlockingUpToMaxLength:;
- (BOOL)isReadyToSend;
- (id)_readAvailableData;
- (void)_inputStreamHasBytesAvailable;
- (void)_outputStreamDidOpen;
- (void)_outputStreamCanWrite;
- (void)_inputStreamDidClose;
@end
