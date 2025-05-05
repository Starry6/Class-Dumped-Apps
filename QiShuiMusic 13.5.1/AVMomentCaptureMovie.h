@interface AVMomentCaptureMovie : NSObject
@property (nonatomic) AVMomentCaptureMovieRecordingResolvedSettings resolvedSettings;
@property (nonatomic) NSURL outputFileURL;
@property (nonatomic) NSURL debugMetadataSidecarFileURL;
@property (nonatomic) ^{__CVBuffer=} previewPixelBuffer;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) NSArray movieMetadata;
- (void)dealloc;
- (id)previewPixelBuffer;
- (id)resolvedSettings;
- (void)_setDuration:;
- (id)debugDescription;
- (id)description;
- (id)duration;
- (id)outputFileURL;
- (id)movieMetadata;
- (id)_initWithResolvedSettings:outputFileURL:movieMetadata:;
- (void)_setDebugMetadataSidecarFileURL:;
- (void)_setPreviewPixelBuffer:;
- (id)debugMetadataSidecarFileURL;
+ (id)movieWithResolvedSettings:outputFileURL:movieMetadata:;
@end
