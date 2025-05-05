@interface AVCMediaStreamNegotiatorSettingsAirplayMirroring : AVCMediaStreamNegotiatorSettings
- (int)operatingMode;
- (long long)tilesPerFrame;
- (long long)captureSource;
- (id)initWithOptions:deviceRole:error:;
- (long long)videoStreamMode;
@end
