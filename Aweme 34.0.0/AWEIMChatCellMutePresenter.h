@interface AWEIMChatCellMutePresenter : AWEIMCellPresenterBase
@property (nonatomic) BOOL enableMsgTabUIOpt;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (BOOL)enableMsgTabUIOpt;
- (void)setEnableMsgTabUIOpt:;
- (long long)cellAccessibilityOrder;
@end
