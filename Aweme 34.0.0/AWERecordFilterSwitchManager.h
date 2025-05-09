@interface AWERecordFilterSwitchManager : NSObject
@property (nonatomic) NSArray filterArray;
@property (nonatomic) AWECameraFilterConfiguration filterConfiguration;
@property (nonatomic) CADisplayLink displayLink;
@property (nonatomic) UIPanGestureRecognizer panGes;
@property (nonatomic) NSHashTable panGesExcludeViews;
@property (nonatomic) IESEffectModel currentFilter;
@property (nonatomic) IESEffectModel switchToFilter;
@property (nonatomic) q switchFilterDirection;
@property (nonatomic) BOOL filterAniTiming;
@property (nonatomic) double autoRenderProgress;
@property (nonatomic) BOOL isCompeleteWhenFilterAniBegin;
@property (nonatomic) BOOL isSwitchFilter;
@property (nonatomic) BOOL reloadFilterPanelWhenFinishSwitching;
@property (nonatomic) @? completionBlock;
@property (nonatomic) <AWERecordFilterSwitchProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)panGes;
- (void)setPanGes:;
- (void)setFilterArray:;
- (id)filterArray;
- (void)updatePanGestureEnabled:;
- (BOOL)isSwitchFilter;
- (void)panSwitchFilter:;
- (void)finishCurrentSwitchProcess;
- (void)addPanGesExcludedView:;
- (void)startSwitchDisplayLink;
- (void)stopSwitchDisplayLink;
- (void)refreshCurrentFilterModelWithFilter:;
- (void)addFilterSwitchGestureForViewController:filterArray:filterConfiguration:;
- (void)setIsSwitchFilter:;
- (void)setSwitchFilterDirection:;
- (long long)switchFilterDirection;
- (void)setSwitchToFilter:;
- (id)switchToFilter;
- (void)changeFilterRelatedUIWithProgress:;
- (void)applyFilterWithBeginProgress:isCompelete:;
- (void)setFilterAniTiming:;
- (void)setIsCompeleteWhenFilterAniBegin:;
- (void)setAutoRenderProgress:;
- (void)renderOnMainLoop;
- (BOOL)filterAniTiming;
- (BOOL)isCompeleteWhenFilterAniBegin;
- (double)autoRenderProgress;
- (void)reloadFilterArrayIfNecessary;
- (void)setReloadFilterPanelWhenFinishSwitching:;
- (void)reloadFilterArray;
- (BOOL)reloadFilterPanelWhenFinishSwitching;
- (void)p_preloadFiltersIfNeed;
- (void)applyFilterWithBeginProgress:isCompelete:showFilterName:;
- (void)refreshFiltterSwitchingDisplay;
- (id)panGesExcludeViews;
- (void)setPanGesExcludeViews:;
- (void)dealloc;
- (id)delegate;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)currentFilter;
- (id)displayLink;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)setCurrentFilter:;
- (void)setDisplayLink:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)reset;
- (void)setDelegate:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)filterConfiguration;
- (void)setFilterConfiguration:;
@end
