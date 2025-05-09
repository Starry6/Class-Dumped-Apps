@interface IESECTabKitDataService : IESECTabKitService
@property (nonatomic) BOOL loadingFirstScreenTab;
@property (nonatomic) BOOL finishReload;
@property (nonatomic) IESECTabKitBFFModel bffModel;
@property (nonatomic) NSString bffModelString;
@property (nonatomic) IESECTabKitTabAnchorModel anchorModel;
@property (nonatomic) Q currentBottomIdx;
@property (nonatomic) Q currentTopIdx;
@property (nonatomic) NSArray currentTabContents;
@property (nonatomic) BOOL firstScreenLoaded;
@property (nonatomic) @? tabContentsFilter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnchorModel:;
- (id)anchorModel;
- (BOOL)anchorToTargetTabID:animated:;
- (id)bffModel;
- (id)bffModelString;
- (unsigned long long)currentBottomIdx;
- (id)currentBottomTabModel;
- (id)currentTabContentModel;
- (id)currentTabContents;
- (unsigned long long)currentTopIdx;
- (BOOL)finishReload;
- (id)firstScreenAnchorModel;
- (BOOL)firstScreenLoaded;
- (BOOL)isAnchorTab:;
- (void)loadFirstScreenTab:;
- (BOOL)loadingFirstScreenTab;
- (void)p_updateCurrentTabContents:;
- (void)parseBizExtraInfo:;
- (unsigned long long)recordedTopIdxWithBottomIdx:;
- (void)registerModelClassForBizExtraInfo:;
- (void)reloadWithBFFModel:;
- (void)setBffModel:;
- (void)setBffModelString:;
- (void)setCurrentBottomIdx:;
- (void)setCurrentTabContents:;
- (void)setCurrentTopIdx:;
- (void)setFinishReload:;
- (void)setFirstScreenLoaded:;
- (void)setLoadingFirstScreenTab:;
- (void)setTabContentsFilter:;
- (id)tabContentsFilter;
- (id)tabContentsForBottomIdx:;
- (id)tabModelForAnchorTabID:inTabs:;
- (id)tabModelForBottomIdx:;
- (id)tabModelForBottomIdx:topIdx:;
- (id)tabModelForTabID:;
- (id)tabModelForTabID:inTabs:;
- (void)updateCurrentBottomIdx:;
- (void)updateCurrentTabContents;
- (void)updateCurrentTopIdx:;
- (id)init;
- (void).cxx_destruct;
+ (id)anchorModelForTabID:withTabs:;
+ (id)anchorModelWithIndexPath:tabs:animated:;
+ (id)indexArrayForTabID:inTabs:;
+ (id)indexPathForTabID:inTabs:;
@end
