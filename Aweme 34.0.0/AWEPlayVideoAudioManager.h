@interface AWEPlayVideoAudioManager : NSObject
@property (nonatomic) AWEPlayVideoAudioMetricsContext audioMetricsContext;
@property (nonatomic) <IESVideoPlayerProtocol> playerController;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) NSDictionary logExtraDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLogExtraDict:;
- (id)referString;
- (void)setReferString:;
- (id)logExtraDict;
- (void)audioOpenWithSampleRate:frameSampleNB:bytePerSample:channels:format:isPacked:duration:;
- (void)audioWriteWithBuffers:bufferSize:samples:timeStamp:;
- (void)audioClose;
- (void)setAudioMetricsContext:;
- (id)audioMetricsContext;
- (void)setAudioProxyDelegateIfNeeded;
- (void)setModel:;
- (id)init;
- (void)setPlayerController:;
- (id)playerController;
- (id)model;
- (void).cxx_destruct;
@end
