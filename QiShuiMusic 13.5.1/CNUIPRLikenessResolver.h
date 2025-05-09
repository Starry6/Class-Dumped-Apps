@interface CNUIPRLikenessResolver : NSObject
@property (nonatomic) <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic) CNCache likenessCache;
@property (nonatomic) CNQueue evictionQueue;
@property (nonatomic) NSObject<OS_dispatch_source> memoryMonitoringSource;
@property (nonatomic) <CNSchedulerProvider> mainThreadSchedulerProvider;
@property (nonatomic) <CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) q prohibitedSources;
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) CNSchedulerProvider schedulerProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithContactStore:scheduler:;
- (void)setLikenessResolver:;
- (id)badgeObservableWithLikenessBadge:workScheduler:;
- (id)schedulerProvider;
- (id)resolveLikenessesForContacts:workScheduler:withContentHandler:;
- (id)basicMonogramObservableFromString:color:;
- (id)likenessesForContact:workScheduler:;
- (id)likenessesForContact:options:workScheduler:;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:scheduler:meMonitor:;
- (void)setProhibitedSources:;
- (id)likenessResolver;
- (void)setPlaceholderProviderFactory:;
- (id)memoryMonitoringSource;
- (id)initWithLikenessResolver:;
- (id)initWithLikenessResolver:capacity:;
- (id)initWithLikenessResolver:capacity:schedulerProvider:;
- (void)emptyCache:;
- (void)refreshCacheKey:;
- (id)likenessLookup;
- (id)likenessCache;
- (void)setLikenessCache:;
- (id)evictionQueue;
- (void)setEvictionQueue:;
- (void)setMemoryMonitoringSource:;
- (id)mainThreadSchedulerProvider;
- (void)setMainThreadSchedulerProvider:;
+ (unsigned long long)maxContacts;
+ (id)descriptorForRequiredKeys;
+ (id)_cacheKeyForContact:;
@end
