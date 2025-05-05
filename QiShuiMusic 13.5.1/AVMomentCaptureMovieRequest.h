@interface AVMomentCaptureMovieRequest : NSObject
@property (nonatomic) AVWeakReferencingDelegateStorage delegateStorage;
@property (nonatomic) AVMomentCaptureSettings momentCaptureSettings;
@property (nonatomic) AVMomentCaptureMovieRecordingSettings unresolvedSettings;
@property (nonatomic) AVMomentCaptureMovieRecordingResolvedSettings resolvedSettings;
@property (nonatomic) Q expectedMovieCount;
@property (nonatomic) I firedCallbackFlags;
@property (nonatomic) AVMomentCaptureMovie movie;
@property (nonatomic) AVMomentCaptureMovie spatialOverCaptureMovie;
- (void)dealloc;
- (id)resolvedSettings;
- (void)setResolvedSettings:;
- (void)setFiredCallbackFlags:;
- (id)delegateStorage;
- (id)unresolvedSettings;
- (unsigned int)firedCallbackFlags;
- (void)setMovie:;
- (id)movie;
- (id)_initWithDelegate:movieRecordingSettings:momentSettings:;
- (id)momentCaptureSettings;
- (unsigned long long)expectedMovieCount;
- (id)spatialOverCaptureMovie;
- (void)setSpatialOverCaptureMovie:;
+ (id)requestWithDelegate:movieRecordingSettings:momentSettings:;
@end
