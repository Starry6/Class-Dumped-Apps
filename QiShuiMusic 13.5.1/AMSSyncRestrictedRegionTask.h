@interface AMSSyncRestrictedRegionTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (void)setAccount:;
- (void)setBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithAccount:;
- (id)performSync;
- (id)initWithAccount:bag:;
- (void)cacheRestrictedRegionSyncTimestamp:;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (BOOL)didExceededSyncDuration:lastTimestamp:currentTimestamp:;
+ (BOOL)hasCachedRestrictedRegionsValueFromAccount:cachedTimestamp:;
+ (double)durationOfSyncRestrictedRegionValueFromBag:;
+ (BOOL)storefrontContainsRestrictedRegionsValueFromBag:;
+ (double)checkRestrictedRegionDurationValueFromBag:;
+ (id)createSyncAccountFlagsTaskForAccount:bag:;
@end
