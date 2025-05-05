@interface AVCMediaStreamNegotiatorSettingsiPadCompanion : AVCMediaStreamNegotiatorSettings
- (void)dealloc;
- (int)operatingMode;
- (long long)tilesPerFrame;
- (long long)captureSource;
- (id)hdrModesSupported;
- (id)initWithOptions:deviceRole:error:;
- (long long)videoStreamMode;
- (id)hdrModePixelFormats;
@end
