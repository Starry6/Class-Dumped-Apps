@interface AVStreamDataAssetInspector : AVAssetInspector
- (long long)trackCount;
- (void)dealloc;
- (BOOL)providesPreciseDurationAndTiming;
- (id)trackIDs;
- (id)duration;
- (BOOL)isEqual:;
- (id)initWithTrackIDs:;
@end
