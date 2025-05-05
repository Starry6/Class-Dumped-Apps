@interface AVAssetTrackEnumerator : NSEnumerator
- (id)initWithAsset:;
- (void)setMediaType:;
- (id)nextObject;
- (void)dealloc;
- (id)initWithAsset:mediaCharacteristics:;
- (void)setMediaCharacteristics:;
- (id)initWithAsset:mediaType:;
+ (id)trackEnumeratorWithAsset:;
@end
