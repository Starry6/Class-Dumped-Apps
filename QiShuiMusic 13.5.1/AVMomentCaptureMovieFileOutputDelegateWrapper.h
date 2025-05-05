@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper
@property (nonatomic) NSString videoCodecType;
@property (nonatomic) NSURL spatialOverCaptureMovieFileURL;
@property (nonatomic) NSArray spatialOverCaptureMovieMetadata;
@property (nonatomic) AVMomentCaptureMovieRecordingResolvedSettings resolvedSettings;
@property (nonatomic) BOOL didFinishWritingMovieCallbackFired;
@property (nonatomic) BOOL didFinishWritingSpatialOverCaptureMovieCallbackFired;
- (void)dealloc;
- (id)resolvedSettings;
- (void)setResolvedSettings:;
- (id)videoCodecType;
- (id)initWithSettings:delegate:connections:;
- (id)spatialOverCaptureMovieFileURL;
- (id)spatialOverCaptureMovieMetadata;
- (BOOL)didFinishWritingMovieCallbackFired;
- (void)setDidFinishWritingMovieCallbackFired:;
- (BOOL)didFinishWritingSpatialOverCaptureMovieCallbackFired;
- (void)setDidFinishWritingSpatialOverCaptureMovieCallbackFired:;
+ (id)wrapperWithSettings:delegate:connections:;
@end
