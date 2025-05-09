@interface AWELandscapeMorePanelViewModel : NSObject
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWELandscapePageContext pageContext;
@property (nonatomic) AWEBinding timingCloseBinding;
@property (nonatomic) @? timingCloseHandler;
@property (nonatomic) AWEBinding timingCloseTypeBinding;
@property (nonatomic) @? timingCloseTypeHandler;
@property (nonatomic) NSMutableArray dataSource;
@property (nonatomic) NSMutableArray diamondDataSource;
@property (nonatomic) NSMutableArray listDataSource;
@property (nonatomic) AWELandscapeMorePanelCellModel watchLaterPanelModel;
@property (nonatomic) <AWELandscapeMorePanelViewDelegate> interactionDelegate;
@property (nonatomic) UICollectionView collectionView;
@property (nonatomic) UIView container;
- (void)updateWithModel:pageContext:;
- (void)bindObserver;
- (id)aAWEBrandColorAdapter;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)cellModelWithIndexPath:;
- (void)configDataSource;
- (void)willShowMorePanel;
- (void)removeBindAfterDismissed;
- (long long)numberOfDiamonds;
- (id)diamondDataSource;
- (id)timingCloseBinding;
- (id)timingCloseHandler;
- (id)timingCloseTypeBinding;
- (id)timingCloseTypeHandler;
- (void)handleWatchLaterInfoChangeNotification:;
- (void)configDiamondDataSource;
- (void)configListDataSource;
- (id)linePanelModel;
- (id)listDataSource;
- (id)watchLaterPanelModel;
- (BOOL)canShowDanmaku;
- (id)danmakuSettingsPanelModel;
- (id)backgroundPlayPanelModel;
- (id)bgPlaySmallWindowPanelModel;
- (id)autoRotateSwitchPanelModel;
- (id)subtitlePanelModel;
- (id)timingClosePanelModel;
- (id)pcContinuePlayCellModel;
- (id)cacheVideoPanelModel;
- (BOOL)isSelfVideo;
- (id)dislikePanelModel;
- (id)reportPanelModel;
- (void)setDiamondDataSource:;
- (id)castPanelModel;
- (void)setListDataSource:;
- (id)playSettingsPanelModel;
- (void)addToWatchLater:;
- (void)setWatchLaterPanelModel:;
- (void)reloadTimingClosePanelModel:;
- (void)trackTimingCloseClick;
- (void)setTimingCloseHandler:;
- (void)setTimingCloseBinding:;
- (void)setTimingCloseTypeBinding:;
- (void)setTimingCloseTypeHandler:;
- (id)newTrackerContinuePlayCommonParams;
- (void)trackClickPCContinuePlay;
- (void)trackShowPCContinuePlay;
- (void)trackChangeSubtitleToStatus:;
- (void)setModel:;
- (void)setContainer:;
- (id)container;
- (id)collectionView;
- (id)init;
- (void)dealloc;
- (long long)numberOfItems;
- (id)interactionDelegate;
- (void)setCollectionView:;
- (void)setInteractionDelegate:;
- (id)model;
- (void).cxx_destruct;
- (void)setDataSource:;
- (id)dataSource;
- (void)setPageContext:;
- (id)pageContext;
+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
