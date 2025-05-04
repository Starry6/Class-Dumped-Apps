@interface AWEPlayInteractionNewSearchAnchorElement : AWEPlayInteractionNewBottomElement
@property (nonatomic) AWEPlayInteractionSearchAnchorView searchAnchorView;
@property (nonatomic) AWESearchAnchorModel searchAnchorModel;
@property (nonatomic) AWESearchAnchorListModel anchorListModel;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (unsigned long long)elementVisibleType;
- (void)handleElementWhenPriorityAvoid:;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (void)viewDidDisposed;
- (void)setAnchorListModel:;
- (void)setSearchAnchorModel:;
- (id)searchAnchorModel;
- (id)anchorListModel;
- (BOOL)shouldAppearWithData:;
- (void)trackOnDisplay:;
- (void)updateRelatedSearchTipView;
- (id)searchAnchorView;
- (void)setSearchAnchorView:;
- (void)configAnchorModelWithModel:;
- (BOOL)shouldShowRelatedSearchTipView:;
- (void)viewDidLoad;
- (id)identifier;
- (void).cxx_destruct;
@end
