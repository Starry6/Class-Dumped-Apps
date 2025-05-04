@interface AWEIMNoticeQuoteReplyContentComponent : AWEIMFlexComponent
@property (nonatomic) NSAttributedString quoteAttrString;
@property (nonatomic) NSAttributedString contentAttrString;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)contentAttrString;
- (void)setContentAttrString:;
- (void)p_createPresenter;
- (void)p_createAttrText;
- (void)setQuoteAttrString:;
- (id)quoteAttrString;
- (void)p_didTapQuote;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
