@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector
@property (nonatomic) ^{OpaqueFigMutableComposition=} mutableComposition;
- (id)segments;
- (void)dealloc;
- (BOOL)isPlayable;
- (BOOL)isDecodable;
- (id)_getFigSampleCursorServiceReportingTimeAccuracy:;
- (id)segmentForTrackTime:;
- (id)_initWithAsset:trackID:trackIndex:;
- (int)decodabilityValidationResult;
- (int)playabilityValidationResult;
- (id)_mutableComposition;
@end
