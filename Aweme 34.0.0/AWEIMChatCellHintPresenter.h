@interface AWEIMChatCellHintPresenter : AWEIMCellPresenterBase
@property (nonatomic) UIFont font;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) q lineBreakMode;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (id)content;
- (long long)lineBreakMode;
- (void)encodeWithCoder:;
- (void)setLineBreakMode:;
- (void)setContent:;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (id)initWithCoder:;
@end
