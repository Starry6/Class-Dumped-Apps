@interface EDMailDynamicDataAsset : NSObject
@property (nonatomic) BOOL shouldIgnoreUserAccountDomains;
@property (nonatomic) NSSet ignoredDomains;
@property (nonatomic) EDAssetDownloadScheduler scheduler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_updateIgnoredDomains:;
- (id)init;
- (void)setShouldIgnoreUserAccountDomains:;
- (void)setScheduler:;
- (id)scheduler;
- (void)setIgnoredDomains:;
- (void)_queryForAssetWithCompletion:;
- (void).cxx_destruct;
- (BOOL)shouldIgnoreUserAccountDomains;
- (void)_updateStateFromAsset:;
- (BOOL)shouldIgnoreDomain:;
- (id)ignoredDomains;
- (void)_downloadAssetCatalogWithCompletion:;
+ (id)log;
+ (id)_ignoredDomainsFallback;
@end
