@interface AWEKnowledgeRichContentImpl.FullPageFeedNavigationBarComponent : AWEKnowledgeRichContentImpl.FullPageFeedBaseComponent
@property (nonatomic) UIView<AWEDiscoverFeedEntranceViewProtocol> discoverEntranceView;
- (void)onContainerViewDidLoad;
- (void)executePageModeChangeAnimation:;
- (id)discoverEntranceView;
- (void)setDiscoverEntranceView:;
- (void)trackDiscoverButtonShow;
- (void)showNavigationBarWithShow:;
- (id)init;
- (void).cxx_destruct;
@end
