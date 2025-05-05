@interface SiriTTSOspreyChannel : NSObject
@property (nonatomic) OspreyChannel grpcChannel;
- (void).cxx_destruct;
- (id)initWithURL:configuration:;
- (void)streamTTS:beginHandler:chunkHandler:completion:;
- (void)initializeDeviceAuthenticationSessionWithCompletion:;
- (void)preconnect;
- (id)grpcChannel;
- (void)setGrpcChannel:;
@end
