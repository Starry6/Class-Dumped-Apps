@interface VCAudioRelayIOControllerSettings : NSObject
@property (nonatomic) r^{tagVCAudioFrameFormat={AudioStreamBasicDescription=dIIIIIIII}I} audioFormat;
@property (nonatomic) r^{_VCRemoteCodecInfo=Id} remoteCodecInfo;
- (id)audioFormat;
- (id)remoteCodecInfo;
- (id)initWithAudioFormat:remoteCodecInfo:;
@end
