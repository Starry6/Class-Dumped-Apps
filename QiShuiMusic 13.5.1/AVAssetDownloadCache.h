@interface AVAssetDownloadCache : AVAssetCache
- (id)initWithAsset:;
- (void)dealloc;
- (BOOL)isPlayableOffline;
- (id)_asset;
- (id)mediaSelectionOptionsInMediaSelectionGroup:;
- (id)URL;
@end
