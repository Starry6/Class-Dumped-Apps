@interface ARGeoTrackingConsensusAndAverageFilter : NSObject
- (void)dealloc;
- (double)score;
- (id)initWithENUFromECEF:maxHistory:minInlierScore:;
- (BOOL)getCurrentENUFromVIO:ENUFromVIO:;
- (void)updateWithVIOPose:VLPose:;
@end
