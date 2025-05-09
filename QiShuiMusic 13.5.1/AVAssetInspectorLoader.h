@interface AVAssetInspectorLoader : NSObject
@property (nonatomic) AVWeakReference weakReference;
@property (nonatomic) NSURL URL;
@property (nonatomic) ^{OpaqueFigFormatReader=} formatReader;
@property (nonatomic) ^{OpaqueFigAsset=} figAsset;
@property (nonatomic) ^{OpaqueFigPlaybackItem=} playbackItem;
@property (nonatomic) # classForTrackInspectors;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) NSArray variants;
@property (nonatomic) NSString lyrics;
@property (nonatomic) BOOL playable;
@property (nonatomic) BOOL exportable;
@property (nonatomic) BOOL readable;
@property (nonatomic) BOOL composable;
@property (nonatomic) BOOL compatibleWithSavedPhotosAlbum;
@property (nonatomic) NSArray figChapterGroupInfo;
@property (nonatomic) NSArray figChapters;
@property (nonatomic) NSURL resolvedURL;
@property (nonatomic) NSURL originalNetworkContentURL;
@property (nonatomic) Q downloadToken;
@property (nonatomic) NSArray contentKeySpecifiersEligibleForPreloading;
@property (nonatomic) BOOL hasProtectedContent;
@property (nonatomic) BOOL streaming;
@property (nonatomic) q firstFragmentSequenceNumber;
@property (nonatomic) q fragmentCount;
@property (nonatomic) BOOL associatedWithFragmentMinder;
@property (nonatomic) double fragmentMindingInterval;
- (unsigned long long)downloadToken;
- (long long)firstFragmentSequenceNumber;
- (BOOL)isExportable;
- (id)figChapters;
- (long long)fragmentCount;
- (id)originalNetworkContentURL;
- (id)resolvedURL;
- (id)init;
- (id)assetInspector;
- (void)dealloc;
- (void)loadValuesAsynchronouslyForKeys:keysForCollectionKeys:completionHandler:;
- (id)_formatReader;
- (BOOL)isPlayable;
- (BOOL)isComposable;
- (id)variants;
- (void)_ensureAllDependenciesOfKeyAreLoaded:;
- (BOOL)hasProtectedContent;
- (void)_setFragmentMindingInterval:;
- (Class)_classForTrackInspectors;
- (id)_weakReference;
- (BOOL)_isStreaming;
- (double)_fragmentMindingInterval;
- (BOOL)isCompatibleWithSavedPhotosAlbum;
- (void)cancelLoading;
- (BOOL)isAssociatedWithFragmentMinder;
- (void)loadValuesAsynchronouslyForKeys:completionHandler:;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)lyrics;
- (long long)statusOfValueForKey:error:;
- (id)_playbackItem;
- (void)_setIsAssociatedWithFragmentMinder:;
- (id)figChapterGroupInfo;
- (BOOL)isReadable;
- (id)duration;
- (id)_figAsset;
- (id)URL;
- (id)copyWithZone:;
- (void)_serverHasDied;
- (id)_createAVErrorForError:andFigErrorCode:;
@end
