@interface BWIrisMovieInfoAndCallback : NSObject
@property (nonatomic) BWIrisMovieInfo info;
@property (nonatomic) @? callback;
@property (nonatomic) BOOL processed;
@property (nonatomic) double overCaptureQualityScore;
@property (nonatomic) I overCaptureQualityScoringVersion;
- (id)callback;
- (void)dealloc;
- (id)info;
- (BOOL)processed;
- (void)setProcessed:;
- (double)overCaptureQualityScore;
- (void)setOverCaptureQualityScore:;
- (unsigned int)overCaptureQualityScoringVersion;
- (void)setOverCaptureQualityScoringVersion:;
+ (id)movieInfoAndCallbackWithMovieInfo:callback:;
@end
