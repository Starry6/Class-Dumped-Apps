@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject
@property (nonatomic) NSArray micConnectionConfigurations;
@property (nonatomic) FigCaptureSourceConfiguration cameraConfigurationForStereoAudioCapture;
@property (nonatomic) FigVideoCaptureConnectionConfiguration movieFileVideoConnectionConfigurationForStereoAudioCapture;
- (void)dealloc;
- (id)movieFileVideoConnectionConfigurationForStereoAudioCapture;
- (id)micConnectionConfigurations;
- (id)cameraConfigurationForStereoAudioCapture;
@end
