@interface BWIrisMovieGenerator : NSObject
@property (nonatomic) BOOL suspended;
@property (nonatomic) NSInteger numberOfPendingReferenceMovies;
@property (nonatomic) {?=qiIq} actualMovieStartTime;
@property (nonatomic) BOOL vitalInputStreamHasBeenForcedOff;
@property (nonatomic) NSInteger streamForcedOffErrorCode;
- (void)dealloc;
- (BOOL)suspended;
- (BOOL)flush;
- (void)setSuspended:;
- (id)initWithReadableByteStream:forFrontFacingCamera:sampleReferenceMoviesEnabled:movieGenerationQueue:irisStillImageMovieMetadataCache:videoOrientationTimeMachine:;
- (void)writeMovieWithInfo:completionHandler:;
- (void)parseAdditionalFragments;
- (BOOL)flushAsync;
- (void)updateOverCaptureQualityScoresForMoviesEndingBefore:fromMetadataRingBuffer:;
- (int)numberOfPendingReferenceMovies;
- (id)actualMovieStartTime;
- (void)setActualMovieStartTime:;
- (BOOL)vitalInputStreamHasBeenForcedOff;
- (void)setVitalInputStreamHasBeenForcedOff:;
- (int)streamForcedOffErrorCode;
- (void)setStreamForcedOffErrorCode:;
@end
