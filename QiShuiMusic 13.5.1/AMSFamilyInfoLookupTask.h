@interface AMSFamilyInfoLookupTask : AMSTask
@property (nonatomic) ACAccount account;
@property (nonatomic) <AMSBagProtocol> bag;
@property (nonatomic) NSString logKey;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)account;
- (id)initWithBagContract:;
- (void)setLogKey:;
- (id)logKey;
- (id)initWithBag:;
- (void).cxx_destruct;
- (id)bag;
- (id)initWithAccount:bag:;
- (id)performFamilyInfoLookup;
- (id)_performFamilyInfoRequestForAccount:error:;
- (void)_cacheFamilyInfoLookupResult:forAccount:;
- (id)_cachedFamilyInfoLookupResultForAccount:;
- (id)_currentCachedFamilyInfo;
- (id)_pathForCachedFamilyInfoLookupResult;
+ (id)createBagForSubProfile;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
+ (id)_processURLResult:;
@end
