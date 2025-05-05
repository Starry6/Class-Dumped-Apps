@interface AROrientationTrackingConfiguration : ARConfiguration
@property (nonatomic) BOOL autoFocusEnabled;
- (id)init;
- (id)description;
+ (id)new;
+ (id)recommendedVideoFormatForHighResolutionFrameCapturing;
+ (id)supportedVideoFormats;
+ (BOOL)supportsFrameSemantics:;
+ (id)recommendedVideoFormatFor4KResolution;
+ (id)_querySupportedVideoFormats;
@end
