@interface PLLivePhotoPairingProcessor : PLPairingProcessor
- (id)groupIDForAsset:;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:;
- (id)firstGroupFromAssets:;
- (id)combinePair:error:;
- (id)livePhotoFetchRequestWithPredicate:;
@end
