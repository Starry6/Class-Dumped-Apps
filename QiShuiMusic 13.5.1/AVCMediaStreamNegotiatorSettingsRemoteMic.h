@interface AVCMediaStreamNegotiatorSettingsRemoteMic : AVCMediaStreamNegotiatorSettings
- (int)operatingMode;
- (long long)audioStreamMode;
- (unsigned long long)ptime;
- (int)preferredAudioCodec;
- (id)initWithOptions:deviceRole:error:;
@end
