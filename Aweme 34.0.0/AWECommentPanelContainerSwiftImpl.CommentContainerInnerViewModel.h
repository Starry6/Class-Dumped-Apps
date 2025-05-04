@interface AWECommentPanelContainerSwiftImpl.CommentContainerInnerViewModel : AWECommentSwiftImpl.AWECommentBaseListViewModel
@property (nonatomic) <AWECommentTabManagerProtocol> tabManager;
- (void)dealloc;
- (void)fetchListData;
- (id)tabManager;
- (void)setTabManager:;
- (void)reloadContentViewModel;
- (long long)indexForTabbarType:;
- (id)createTabContext;
- (void)updateTabContext:;
- (id)init;
- (id)currentContext;
- (void).cxx_destruct;
@end
