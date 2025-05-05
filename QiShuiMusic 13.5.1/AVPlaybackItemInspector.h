@interface AVPlaybackItemInspector : AVAssetInspector
@property (nonatomic) ^{OpaqueFigPlaybackItem=} playbackItem;
- (long long)trackCount;
- (id)_valueAsCFTypeForProperty:;
- (id)metadataForFormat:;
- (id)commonMetadata;
- (id)naturalSize;
- (void)dealloc;
- (void)_setPlaybackItem:;
- (id)availableMetadataFormats;
- (id)compatibleTrackForCompositionTrack:;
- (unsigned long long)hash;
- (BOOL)providesPreciseDurationAndTiming;
- (id)lyrics;
- (id)trackIDs;
- (id)initWithPlaybackItem:trackIDs:;
- (id)_playbackItem;
- (id)duration;
- (BOOL)isEqual:;
@end
