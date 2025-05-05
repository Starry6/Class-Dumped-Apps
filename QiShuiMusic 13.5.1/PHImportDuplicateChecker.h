@interface PHImportDuplicateChecker : NSObject
@property (nonatomic) PHPhotoLibrary library;
- (void)setLibrary:;
- (id)initWithLibrary:;
- (id)library;
- (void).cxx_destruct;
- (unsigned long long)_populateCachesWithAssetsInfos:;
- (void)_updateAssetsFromDupInfos;
- (void)_setDupInfo:forFingerprint:inCache:;
- (void)_populateCachesWithAssetInfo:;
- (id)_filterDuplicatesForItem:duplicateSet:considerItemsInTrash:;
- (id)_findMatchingAssetsForItem:inSet:matchingDate:confidence:;
- (BOOL)_findFingerprint:forItem:inCache:considerTrash:;
- (id)_checkForDuplicate:considerItemsInTheTrash:;
- (void)findDuplicatesOfItems:considerItemsInTrash:forEach:atEnd:;
+ (id)duplicatesFromResults:forLibrary:;
+ (id)_dateWithDate:;
+ (id)_fetchAssetInfoFromLibrary:forFileSizes:;
@end
