@interface AWELeftSideBarRecentVisitUserContainerView : UIView
@property (nonatomic) AWELeftSideBarDynamicUserDataModel model;
@property (nonatomic) AWELeftSideBarRecentVisitUserCellConfig config;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) NSMutableArray cells;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView contentView;
@property (nonatomic) AWELeftSideBarRecentVisitHeaderView headerView;
@property (nonatomic) <AWELeftSideBarRecentVisitUserContainerViewDelegate> delegate;
- (void)leftSideBarThemeDidChange:;
- (void)setNeedAnimation:;
- (BOOL)needAnimation;
- (id)getLeftSideBarTrackParamsForBusiness:;
- (void)showContainerReloadAnimation;
- (void)updateWithConfig:model:;
- (id)p_getHeaderViewClickSchema;
- (void)p_clickAllButtonWithSchema:;
- (unsigned long long)p_realDisplayCellCount;
- (void)clickCellWithItemModel:schema:index:;
- (unsigned long long)p_maxDisplayCellCount;
- (BOOL)p_shouldUpdateCellsLayoutConstraintWithNewConfig:;
- (void)p_updateCellsLayoutConstraint;
- (void)p_updateCellByIndex:;
- (void)layoutCells:;
- (void)p_logLayoutInfo;
- (id)initWithConfig:model:delegate:;
- (void)startCellsAnimationIfNeeded;
- (void)stopCellsAnimationIfNeeded;
- (id)createVisitCellWithModel:;
- (void)setModel:;
- (void)setConfig:;
- (id)delegate;
- (id)config;
- (id)contentView;
- (id)containerView;
- (id)headerView;
- (id)model;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (void)setHeaderView:;
- (id)cells;
- (void)setupUI;
- (void)setCells:;
@end
