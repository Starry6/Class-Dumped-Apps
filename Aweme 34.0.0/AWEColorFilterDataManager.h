@interface AWEColorFilterDataManager : NSObject
@property (nonatomic) NSString frontFilterId;
@property (nonatomic) NSString rearFilterId;
@property (nonatomic) NSMutableSet tempURLSet;
@property (nonatomic) IESEffectModel frontCameraFilter;
@property (nonatomic) IESEffectModel rearCameraFilter;
@property (nonatomic) IESEffectModel normalFilter;
@property (nonatomic) NSString panel;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) NSObject<OS_dispatch_queue> downloadQueue;
@property (nonatomic) NSMutableArray downloadingEffects;
@property (nonatomic) q nextDownloadIndex;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL enableComposerFilter;
@property (nonatomic) NSArray allEffects;
@property (nonatomic) NSMutableDictionary colorFilterConfigurationHelperDic;
@property (nonatomic) NSOperationQueue downloadOpQueue;
@property (nonatomic) Q filterPanelType;
@property (nonatomic) BOOL enablePrefetchOptimize;
@property (nonatomic) NSArray flattenAllEffects;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)effectWithID:;
- (id)colorFilterConfigurationHelperWithType:;
- (id)getIPFromURLList:;
- (long long)downloadStatusOfEffect:;
- (id)downloadingEffects;
- (void)setDownloadingEffects:;
- (void)setEnablePrefetchOptimize:;
- (void)updateEffectFilters;
- (id)frontCameraFilter;
- (void)setFrontCameraFilter:;
- (id)rearCameraFilter;
- (void)setRearCameraFilter:;
- (BOOL)enableComposerFilter;
- (id)getIPArrayFromHost:;
- (void)downloadEffect:completion:;
- (id)initWithCustomPanelName:;
- (id)aggregatedEffects;
- (void)fetchEffectListStateCompletion:;
- (void)updateEffectListStateWithCheckArray:uncheckArray:;
- (void)addEffectToDownloadQueue:;
- (void)addEffectToDownloadQueue:preload:;
- (id)allAggregatedEffects;
- (id)getDefaultPanelWithEnableComposer:;
- (void)handleLanguageChangedRefreshFilterResource:;
- (unsigned long long)filterPanelType;
- (void)updateEffectFiltersForce:;
- (void)setNextDownloadIndex:;
- (void)updateAllEffectsWithResponse:reset:;
- (BOOL)enablePrefetchOptimize;
- (void)addNextEffectToDownloadQueue;
- (void)setRearFilterId:;
- (void)setFrontFilterId:;
- (id)flattenedAggregatedEffects;
- (id)frontFilterId;
- (id)rearFilterId;
- (void)setAllEffects:;
- (long long)nextDownloadIndex;
- (id)normalFilter;
- (void)setFilterPanelType:;
- (id)flattenAllEffects;
- (void)setFlattenAllEffects:;
- (id)tempURLSet;
- (void)setTempURLSet:;
- (void)setNormalFilter:;
- (void)setEnableComposerFilter:;
- (id)colorFilterConfigurationHelperDic;
- (void)setColorFilterConfigurationHelperDic:;
- (id)downloadOpQueue;
- (void)setDownloadOpQueue:;
- (id)semaphore;
- (id)init;
- (void)dealloc;
- (void)setSemaphore:;
- (void)setDownloadQueue:;
- (void).cxx_destruct;
- (id)downloadQueue;
- (id)panel;
- (id)allEffects;
- (BOOL)isFetching;
- (void)setIsFetching:;
- (void)setPanel:;
- (id)availableEffects;
+ (id)effectWithID:;
+ (void)loadEffectWithID:completion:;
+ (id)prevFilterOfFilter:filterArray:;
+ (id)nextFilterOfFilter:filterArray:;
+ (id)defaultManager;
@end
