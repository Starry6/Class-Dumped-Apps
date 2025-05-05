@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration
@property (nonatomic) BOOL collectionType;
@property (nonatomic) q managedStatus;
@property (nonatomic) BOOL hasNonPurgeableAsset;
@property (nonatomic) BOOL storeRedownloadable;
- (void)setCollectionType:;
- (BOOL)hasNonPurgeableAsset;
- (unsigned long long)hash;
- (BOOL)isStoreRedownloadable;
- (long long)managedStatus;
- (BOOL)isCollectionType;
- (void)setHasNonPurgeableAsset:;
- (void)setManagedStatus:;
- (void)setStoreRedownloadable:;
- (BOOL)isEqual:;
@end
