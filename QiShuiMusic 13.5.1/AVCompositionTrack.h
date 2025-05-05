@interface AVCompositionTrack : AVAssetTrack
@property (nonatomic) NSArray segments;
@property (nonatomic) NSArray formatDescriptionReplacements;
- (id)segments;
- (void)dealloc;
- (id)segmentForTrackTime:;
- (id)description;
- (id)_initWithAsset:trackID:trackIndex:;
- (BOOL)isEnabled;
- (id)_mutableComposition;
- (id)formatDescriptionReplacements;
@end
