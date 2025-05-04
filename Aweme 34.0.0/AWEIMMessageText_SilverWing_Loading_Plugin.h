@interface AWEIMMessageText_SilverWing_Loading_Plugin : AWEIMFlexComponent
@property (nonatomic) AWEIMWaittingReplyLoadingView loadingView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attributedContent;
- (void)componentDidMounted:;
- (id)getLoadingStr;
- (void)afterRenderCellDidFinished;
- (id)displayMessage;
- (void)setLoadingView:;
- (id)loadingView;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
