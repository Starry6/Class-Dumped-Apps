@interface AVCMediaStreamNegotiatorSettingsRemoteCamera : AVCMediaStreamNegotiatorSettings
- (int)operatingMode;
- (long long)tilesPerFrame;
- (unsigned long long)minBandwidth;
- (long long)captureSource;
- (id)initWithOptions:deviceRole:error:;
- (long long)videoStreamMode;
+ (BOOL)isOfferSupported;
@end
