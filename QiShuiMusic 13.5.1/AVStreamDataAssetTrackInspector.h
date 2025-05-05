@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector
- (id)dimensions;
- (id)mediaType;
- (id)timeRange;
- (id)naturalSize;
- (void)dealloc;
- (id)formatDescriptions;
- (int)trackID;
- (id)_initWithAsset:trackID:trackIndex:;
- (BOOL)isEnabled;
- (id)mediaCharacteristics;
- (unsigned int)figMediaType;
@end
