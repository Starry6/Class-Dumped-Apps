@interface AWEIMChatCellTimeTextPresenter : AWEIMCellPresenterBase
@property (nonatomic) NSString timeText;
@property (nonatomic) NSAttributedString content;
@property (nonatomic) BOOL enableMsgTabUIOpt;
- (void)updateView:;
- (void)setTimeText:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (BOOL)enableMsgTabUIOpt;
- (void)setEnableMsgTabUIOpt:;
- (long long)cellAccessibilityOrder;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)timeText;
@end
