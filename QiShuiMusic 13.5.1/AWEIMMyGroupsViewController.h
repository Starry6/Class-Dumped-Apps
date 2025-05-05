@interface AWEIMMyGroupsViewController : AWEIMListBaseViewController
@property (nonatomic) IESIMUILoadingView firstLoadingView;
@property (nonatomic) AWEIMConversationPuller conversationPuller;
@property (nonatomic) <AWEIMMyGroupsViewControllerDelegate> delegate;
- (id)conversationPuller;
- (long long)currentFunctin;
- (void)didTapCellAtIndexPath:;
- (id)firstLoadingView;
- (void)p_addFooter;
- (void)p_dismiss;
- (void)setConversationPuller:;
- (void)setFirstLoadingView:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)fetchData;
- (void)viewDidLoad;
@end
