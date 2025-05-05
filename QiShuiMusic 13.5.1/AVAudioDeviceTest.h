@interface AVAudioDeviceTest : NSObject
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) <AVAudioDeviceTestServiceProtocol> serviceDelegateAsync;
@property (nonatomic) <AVAudioDeviceTestServiceProtocol> serviceDelegateSync;
@property (nonatomic) BOOL processSequenceAsynchronously;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)stopRecording:;
- (void)startWithSequence:completion:;
- (void)playback:filePath:completion:;
- (void)startRecording:filePath:completion:;
- (id)initWithXPCEndPoint:;
- (BOOL)processSequenceAsynchronously;
- (void)setProcessSequenceAsynchronously:;
- (id)serviceDelegateAsync;
- (void)setServiceDelegateAsync:;
- (id)serviceDelegateSync;
- (void)setServiceDelegateSync:;
@end
