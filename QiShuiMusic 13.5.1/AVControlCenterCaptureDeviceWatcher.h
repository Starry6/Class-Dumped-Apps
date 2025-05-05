@interface AVControlCenterCaptureDeviceWatcher : NSObject
@property (nonatomic) BOOL centerStageSupported;
@property (nonatomic) BOOL backgroundBlurSupported;
@property (nonatomic) BOOL studioLightingSupported;
@property (nonatomic) BOOL micModesSupported;
- (BOOL)centerStageSupported;
- (BOOL)studioLightingSupported;
- (BOOL)micModesSupported;
- (BOOL)backgroundBlurSupported;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)initWithSupportedVideoEffectsDidChangeHandler:;
@end
