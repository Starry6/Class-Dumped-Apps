@interface AWEIMGiphyQuoteReplyComponent : AWEIMGiphyContentComponent
@property (nonatomic) AWEIMGiphyMessageViewModel quotedViewModel;
- (void)componentDidMounted:;
- (id)displayViewModel;
- (id)quotedViewModel;
- (void)setQuotedViewModel:;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
