@interface PLDatabaseContext : NSObject
@property (nonatomic) PLSyndicationIngestMutex syndicationIngestMutex;
@property (nonatomic) q wellKnownPhotoLibraryIdentifier;
- (long long)wellKnownPhotoLibraryIdentifier;
- (void)dealloc;
- (id)momentLibrary;
- (id)initWithLibraryBundle:;
- (void)performTransactionSync:withName:;
- (id)syndicationIngestMutex;
- (id)newShortLivedLibraryForHistoryPersistenceReadingWithName:;
- (id)newMomentLibrary;
- (void).cxx_destruct;
- (void)performSync:withName:;
- (void)performTransaction:withName:;
- (id)newShortLivedMacOpenClientLibraryWithName:;
- (id)newShortLivedCplLibraryWithNameSuffix:;
- (id)newShortLivedLibraryWithName:;
- (void)invalidate;
- (void)perform:withName:;
+ (id)newShortLivedLibraryWithName:bundle:;
@end
