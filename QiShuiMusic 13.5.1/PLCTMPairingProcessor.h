@interface PLCTMPairingProcessor : PLPairingProcessor
@property (nonatomic) BOOL deferredProcessingNeeded;
- (BOOL)deferredProcessingNeeded;
- (void)setDeferredProcessingNeeded:;
- (id)groupIDForAsset:;
- (id)fetchRequestForLibrary;
- (id)fetchRequestForSortedGroupIDs:;
- (id)firstGroupFromAssets:;
- (id)combinePair:error:;
- (void)setDeferredProcessingIfNescessaryForAsset:;
- (id)ctmFetchRequestWithPredicate:;
- (id)_mapResourcesFromSoc:toPrimary:error:;
- (BOOL)_copyResourcesFromSoc:toPrimary:error:;
- (void)_installSocResourcesFromSoc:toPrimary:referencedResourceURLs:;
@end
