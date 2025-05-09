@interface AWESearchTabGuideManager : NSObject
@property (nonatomic) AWESearchSlidingTabbarView slidingTabbarView;
@property (nonatomic) <AWESearchTabManagerProtocol> tabManager;
@property (nonatomic) AWESearchAlienatedTabManager alienatedTabManager;
@property (nonatomic) AWESearchResultViewController searchResultViewController;
@property (nonatomic) AWESearchTabGuideResponse tabGuideResponse;
@property (nonatomic) <AWESearchTabGuideStorageProtocol> storageManager;
@property (nonatomic) AWESearchTabGuideTrackManager trackManager;
@property (nonatomic) @? popViewClick;
@property (nonatomic) NSString preLogID;
@property (nonatomic) BOOL isFromEcommerce;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)tabManager;
- (void)setTabManager:;
- (void)beginRefresh;
- (void)setPreLogID:;
- (id)preLogID;
- (void)registerByteSync;
- (id)getCurrentTabGuide;
- (void)updateMerchandiseSearchRequestTabGuideTrackParams:;
- (void)setIsFromEcommerce:;
- (void)setSlidingTabbarView:;
- (void)setTrackManager:;
- (id)slidingTabbarView;
- (id)guideWithIndex:;
- (id)trackManager;
- (void)setTabGuideResponse:;
- (void)tabGuidInfoUpdate:;
- (BOOL)checkDemotionWithTabGuide:;
- (BOOL)checkFrequencyWithGuide:;
- (void)tabGuideShow:;
- (id)tabGuideResponse;
- (void)tabGuideClick:currentTabType:;
- (id)guideWithTabType:;
- (BOOL)isFromEcommerce;
- (void)updateGeneralSearchRequestTabGuideTrackParams:;
- (void)currentTabRefresRequestFinish;
- (id)alienatedTabManager;
- (id)initWithSlidingTabbarView:tabManager:alienatedTabManager:searchResultViewController:;
- (void)setPopViewClick:;
- (void)reDrawAfterTabViewUpdate;
- (void)bottonTappedWithIndex:currentTabType:;
- (void)updateWithTabGuide:cancelFlag:;
- (void)handleByteSyncCache;
- (void)tabSelectWithIndex:;
- (void)setAlienatedTabManager:;
- (BOOL)handelMessage:;
- (void)updateWithTabGuide:cancelFlag:isAsync:;
- (BOOL)isEcomSearchVisible;
- (BOOL)isGeneralSearchVisiable;
- (id)popViewClick;
- (void)dealloc;
- (id)searchResultViewController;
- (void)setStorageManager:;
- (id)storageManager;
- (void)dismissPopover;
- (void)setSearchResultViewController:;
- (void).cxx_destruct;
+ (id)getBanedGuidIDList;
+ (BOOL)isTabButtonVisiable:;
+ (BOOL)checkExitWithAction:exitRule:isGlobal:;
@end
