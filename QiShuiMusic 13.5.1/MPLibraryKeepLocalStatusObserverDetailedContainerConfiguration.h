@interface MPLibraryKeepLocalStatusObserverDetailedContainerConfiguration : MPLibraryKeepLocalStatusObserverConfiguration
@property (nonatomic) NSArray pendingItemIdentifiers;
@property (nonatomic) q downloadEnabledItemCount;
@property (nonatomic) q nonPurgeableItemCount;
@property (nonatomic) q redownloadableItemCount;
- (long long)nonPurgeableItemCount;
- (unsigned long long)hash;
- (void)setRedownloadableItemCount:;
- (long long)downloadEnabledItemCount;
- (void).cxx_destruct;
- (id)pendingItemIdentifiers;
- (void)setDownloadEnabledItemCount:;
- (void)setNonPurgeableItemCount:;
- (void)setPendingItemIdentifiers:;
- (BOOL)isEqual:;
- (long long)redownloadableItemCount;
@end
