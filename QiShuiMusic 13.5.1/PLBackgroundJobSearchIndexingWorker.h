@interface PLBackgroundJobSearchIndexingWorker : PLBackgroundJobWorker
@property (nonatomic) NSObject<NSCopying> cancelledWorkItem;
@property (nonatomic) PLSearchIndexConfiguration searchIndexConfiguration;
@property (nonatomic) PLSearchTrackedChangeTypes searchTrackedChangeTypes;
@property (nonatomic) PLSpotlightDonationManager donationManager;
- (BOOL)isInterruptible;
- (BOOL)_shouldCancelCurrentWorkItem:;
- (void)stopWorkingOnItem:;
- (id)workItemsNeedingProcessingInLibrary:;
- (void)performWorkOnItem:inLibrary:completion:;
- (void)setCancelledWorkItem:;
- (void).cxx_destruct;
- (void)_resetCancelledWorkItem;
- (id)cancelledWorkItem;
- (id)searchIndexConfiguration;
- (id)searchTrackedChangeTypes;
- (void)_beginSearchIndexRebuildForLibrary:item:rebuildReasons:completion:;
- (void)_resumeSearchIndexRebuildForLibrary:item:completion:;
- (unsigned long long)_resetSpotlightIndexForLibrary:;
- (BOOL)_handleChangesForTransaction:library:;
- (void)setSearchIndexConfiguration:;
- (void)setSearchTrackedChangeTypes:;
- (id)donationManager;
- (void)setDonationManager:;
+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:;
+ (BOOL)_isTokenInvalidError:;
+ (id)_transactionIteratorSinceToken:library:error:;
@end
