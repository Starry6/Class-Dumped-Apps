@interface AWEIMInnerTextContentComponent : AWEIMTextContentComponent
@property (nonatomic) AWEIMTextMessage subMessage;
@property (nonatomic) <AWEIMNativeDynamicContentInterface> contentService;
@property (nonatomic) IESIMWaitingReplyLoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)enableDisplay;
- (void)afterRenderCellDidFinished;
- (void)didUpdateContent;
- (id)contentService;
- (void)setContentService:;
- (void)setSubMessage:;
- (id)subMessage;
- (void)appendEllipsisContentIfNeed;
- (void)parseMarkdownIfCan;
- (void)appendLoadingIfNeed;
- (id)getLoadingStrWithFont:;
- (id)displayMessage;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
+ (id)componentWithContext:;
@end
