@interface AWEIMMixImageQuoteReplyComponent : AWEIMMixImageContentComponent
@property (nonatomic) AWEIMMessage originMessage;
@property (nonatomic) AWEIMMixImageMessageViewModel originMessageViewModel;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)viewControllerLifeCycleChanged:;
- (void)onCellWillRenderForCurrentComponent;
- (void)setOriginMessage:;
- (id)originMessage;
- (void)p_refreshData;
- (void)showMediaDetail;
- (id)specializedViewModel;
- (void)setOriginMessageViewModel:;
- (id)originMessageViewModel;
- (void)configPropsWithMessage;
- (void)updatePropsWithMessage;
- (void)p_reloadAvatars;
- (void)p_didTapQuotedCoverAction;
- (void)p_refreshWithOriginMessage:firstConfig:;
- (void)p_loadDetailMessageFrom:refreshBlock:;
- (void)p_refreshImageDataIfNeeded;
- (BOOL)p_onFinalUIStatus;
- (void)p_refreshQuotedData;
- (void)p_updateQuotedContentPropsDelayCoverHide:;
- (void)p_bindQuotedMessageVM;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
