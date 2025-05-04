@interface AWELeftSideBarAISearchPresenter : AWELeftSideBarBasePresenter
@property (nonatomic) AWELeftSideBarAISearchContainerView containerView;
@property (nonatomic) AWELeftSideBarAISearchDataModel dataModel;
@property (nonatomic) double containerViewHeight;
- (id)initWithContext:extraData:;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:;
- (void)onLeftSideBarOpen;
- (void)leftSideBarViewDynamicModuleRequestDataComplete:isCacheData:;
- (double)containerViewHeight;
- (void)setContainerViewHeight:;
- (void)setupContainerView;
- (id)getEnterFrom;
- (BOOL)enableSearchAIHomeLeftSideBar;
- (id)getGroupID;
- (void)jumpToAIGCResultPage:customTransitionType:extraParams:;
- (void)clickAISearchContainer:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (id)dataModel;
- (void)setDataModel:;
@end
