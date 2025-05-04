@interface AWEIMFeedQuoteReplyComponent : AWEIMFeedContentComponent
@property (nonatomic) <AWEIMCardMessageViewModelInterface> quotedViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)didClickAssistanceButton:;
- (id)displayViewModel;
- (void)didTapFeedCover:extraParams:;
- (id)quotedViewModel;
- (void)setQuotedViewModel:;
- (id)displayMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
