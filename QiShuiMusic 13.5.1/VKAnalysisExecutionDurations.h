@interface VKAnalysisExecutionDurations : NSObject
@property (nonatomic) double madRoundTripAnalysisDuration;
@property (nonatomic) double mrcParseDuration;
@property (nonatomic) double madDocumentDuration;
@property (nonatomic) double madMRCDuration;
@property (nonatomic) double madVisualSearchDuration;
@property (nonatomic) double madRectangleDuration;
- (double)madRoundTripAnalysisDuration;
- (void)setMadRoundTripAnalysisDuration:;
- (double)mrcParseDuration;
- (void)setMrcParseDuration:;
- (double)madDocumentDuration;
- (void)setMadDocumentDuration:;
- (double)madMRCDuration;
- (void)setMadMRCDuration:;
- (double)madVisualSearchDuration;
- (void)setMadVisualSearchDuration:;
- (double)madRectangleDuration;
- (void)setMadRectangleDuration:;
@end
