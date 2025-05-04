@interface AWEIMQuoteReplyDetailStylePresenter : AWEIMUIViewPresenter
@property (nonatomic) AWEIMUILabelPresenter label;
@property (nonatomic) AWEIMUILabelPresenter invisibleStatusLabel;
@property (nonatomic) AWEIMUIViewPresenter line;
@property (nonatomic) AWEIMUIViewPresenter verticalBox;
@property (nonatomic) AWEIMUIViewPresenter box;
@property (nonatomic) AWEIMUIViewPresenter bubble;
- (void)didReceiveProps:;
- (id)invisibleStatusLabel;
- (void)setInvisibleStatusLabel:;
- (id)p_bubbleBackgroundColor:;
- (id)p_lineColor;
- (id)verticalBox;
- (void)setVerticalBox:;
- (void)setLabel:;
- (id)initWithContext:;
- (id)label;
- (id)line;
- (void).cxx_destruct;
- (void)setBox:;
- (id)box;
- (id)bubble;
- (void)setBubble:;
- (void)setLine:;
@end
