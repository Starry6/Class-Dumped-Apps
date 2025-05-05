@interface PLPairingProcessor : NSObject
@property (nonatomic) NSPredicate locatedInUsersPhotoLibrary;
- (id)init;
- (void).cxx_destruct;
- (BOOL)processPairingForFetchRequest:inContext:error:;
- (id)groupIDForAsset:;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:;
- (id)firstGroupFromAssets:;
- (id)combinePair:error:;
- (void)setDeferredProcessingIfNescessaryForAsset:;
- (BOOL)_copyResourceOfType:onAsset:toType:onAsset:error:;
- (BOOL)_copyFromURL:toURL:error:;
- (BOOL)updatePrimaryAsset:andRemoveAssetIfPossible:;
- (void)_deleteResourceOfType:forAsset:verifyInserted:deleteFile:;
- (id)locatedInUsersPhotoLibrary;
- (void)setLocatedInUsersPhotoLibrary:;
@end
