@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader
@property (nonatomic) ^{OpaqueFigPlaybackItem=} playbackItem;
- (id)assetInspector;
- (void)dealloc;
- (id)_playbackItemPropertiesForKeys:;
- (Class)_classForTrackInspectors;
- (void)_removeFigObjectNotifications;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:;
- (unsigned long long)hash;
- (id)_copyFormatReaderFromFigObjectWithFigErrorCode:;
- (void)_addFigObjectNotifications;
- (void)cancelLoading;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_playbackItem;
- (id)initWithURL:playbackItem:trackIDs:dynamicBehavior:;
- (id)duration;
- (BOOL)isEqual:;
@end
