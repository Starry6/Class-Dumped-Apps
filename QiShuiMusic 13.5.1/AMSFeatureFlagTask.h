@interface AMSFeatureFlagTask : AMSTask
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)perform;
- (id)_updateRemoteFeatureFlags;
+ (void)clearCache;
+ (id)createBagForSubProfile;
+ (id)cachedRemoteGroups;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (void)_handleDeletedITFEsFromResponse:;
+ (id)_cachePath;
+ (id)_cacheDirectory;
+ (BOOL)_cacheResponse:error:;
+ (id)lastFetchedDate;
@end
