@interface AWEIMChatCellHighlightHintLabelPresenter : AWEIMCellPresenterBase
@property (nonatomic) NSAttributedString attributedContent;
@property (nonatomic) NSString content;
@property (nonatomic) BOOL disableHighlight;
- (id)attributedContent;
- (void)updateView:;
- (void)setAttributedContent:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (BOOL)disableHighlight;
- (void)setDisableHighlight:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
@end
