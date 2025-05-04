@interface AWEIMQuoteReplyStyleContentProps : AWEIMUIViewPresenterProps
@property (nonatomic) NSAttributedString quoteAttrString;
@property (nonatomic) NSAttributedString contentAttrString;
@property (nonatomic) @? quoteTapAction;
@property (nonatomic) @? bubbleTapAction;
@property (nonatomic) UIColor quoteReplyLineColor;
- (id)contentAttrString;
- (void)setContentAttrString:;
- (void)setBubbleTapAction:;
- (id)bubbleTapAction;
- (void)setQuoteAttrString:;
- (id)quoteAttrString;
- (void)setQuoteReplyLineColor:;
- (void)setQuoteTapAction:;
- (id)quoteTapAction;
- (id)quoteReplyLineColor;
- (void).cxx_destruct;
@end
