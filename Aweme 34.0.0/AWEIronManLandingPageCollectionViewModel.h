@interface AWEIronManLandingPageCollectionViewModel : MTLModel
@property (nonatomic) NSMutableDictionary trackStatus;
@property (nonatomic) AWEIronManLandingPageDataController dataVc;
@property (nonatomic) BOOL firstFetchFinshed;
@property (nonatomic) q refreshCount;
@property (nonatomic) q vmLocation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q maxPreloadLimit;
@property (nonatomic) Q uiVersion;
@property (nonatomic) Q enterFrom;
@property (nonatomic) NSDictionary bdpExtra;
@property (nonatomic) NSDictionary commonRequestParamDict;
@property (nonatomic) Q section;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q originalOffset;
@property (nonatomic) NSArray modelList;
@property (nonatomic) UIViewController containerVC;
@property (nonatomic) NSDictionary commonTrackDict;
- (void)setEnterFrom:;
- (unsigned long long)enterFrom;
- (void)trackEvent:params:;
- (void)setContainerVC:;
- (id)modelList;
- (void)setTrackStatus:;
- (id)trackStatus;
- (void)setModelList:;
- (id)containerVC;
- (void)setCommonTrackDict:;
- (id)commonTrackDict;
- (BOOL)firstFetchFinshed;
- (void)didReceivedUserAction:itemModel:;
- (void)preloadItemIfNeed:index:;
- (id)bdpExtra;
- (void)trackEvent:atIndex:params:;
- (void)setDataVc:;
- (void)setUiVersion:;
- (void)addCollectionNoti:;
- (void)removeCollectionNoti:;
- (unsigned long long)uiVersion;
- (id)dataVc;
- (void)setOriginalOffset:;
- (void)setFirstFetchFinshed:;
- (void)fetchMore:;
- (void)addCollectionActionWithItemModel:;
- (void)removeCollectionActionWithItemModel:;
- (void)refreshDataWithCount:;
- (id)eventStatusKeyAtIndex:event:;
- (long long)maxPreloadLimit;
- (void)setMaxPreloadLimit:;
- (void)setBdpExtra:;
- (id)commonRequestParamDict;
- (void)setCommonRequestParamDict:;
- (long long)vmLocation;
- (void)setVmLocation:;
- (void)setSection:;
- (id)init;
- (void)dealloc;
- (void)setHasMore:;
- (void)addObserver;
- (BOOL)hasMore;
- (unsigned long long)section;
- (void).cxx_destruct;
- (unsigned long long)originalOffset;
- (BOOL)isFetching;
- (void)setIsFetching:;
- (long long)refreshCount;
- (void)setRefreshCount:;
+ (id)modelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
