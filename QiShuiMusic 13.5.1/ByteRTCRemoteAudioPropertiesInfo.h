@interface ByteRTCRemoteAudioPropertiesInfo : NSObject
@property (nonatomic) ByteRTCRemoteStreamKey streamKey;
@property (nonatomic) ByteRTCAudioPropertiesInfo audioPropertiesInfo;
- (id)audioPropertiesInfo;
- (void)setAudioPropertiesInfo:;
- (void).cxx_destruct;
- (id)streamKey;
- (void)setStreamKey:;
@end
