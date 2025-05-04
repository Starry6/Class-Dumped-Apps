@interface AWEIMChatCellMentionLabelPresenter : AWEIMCellPresenterBase
@property (nonatomic) NSAttributedString mentionContent;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (void)setMentionContent:;
- (id)mentionContent;
- (void).cxx_destruct;
@end
