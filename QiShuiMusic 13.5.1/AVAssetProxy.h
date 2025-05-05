@interface AVAssetProxy : AVAsset
- (id)tracks;
- (void)dealloc;
- (id)_formatReader;
- (Class)_classForTrackInspectors;
- (BOOL)isProxy;
- (id)initWithPropertyList:;
- (id)_playbackItem;
- (id)_figAsset;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
+ (id)assetProxyWithPropertyList:;
+ (id)makePropertyListForMovieProxyHeader:name:;
@end
