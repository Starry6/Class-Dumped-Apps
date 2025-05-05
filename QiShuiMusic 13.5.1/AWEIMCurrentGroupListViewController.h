@interface AWEIMCurrentGroupListViewController : AWEIMListBaseViewController
@property (nonatomic) AWEIMConversationPuller conversationPuller;
@property (nonatomic) IESIMUILoadingView firstLoadingView;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterMethod:;
- (BOOL)configWithRouterParamDict:;
- (id)conversationPuller;
- (long long)currentFunctin;
- (void)didTapCellAtIndexPath:;
- (id)enterMethod;
- (id)firstLoadingView;
- (id)iesimui_emptyPageConfigForState:;
- (void)iesimui_emptyPagePrimaryButtonTapped:;
- (void)p_addFooter;
- (void)p_dismiss;
- (void)setConversationPuller:;
- (void)setFirstLoadingView:;
- (void).cxx_destruct;
- (void)fetchData;
- (void)viewDidLoad;
@end
