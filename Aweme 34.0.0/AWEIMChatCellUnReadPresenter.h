@interface AWEIMChatCellUnReadPresenter : AWEIMCellPresenterBase
@property (nonatomic) q colorStyle;
@property (nonatomic) q type;
@property (nonatomic) q unreadCount;
@property (nonatomic) BOOL enableMsgTabUIOpt;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (BOOL)enableMsgTabUIOpt;
- (void)setEnableMsgTabUIOpt:;
- (long long)cellAccessibilityOrder;
- (void)p_updateBackgroundColor:;
- (long long)unreadCount;
- (void)setUnreadCount:;
- (long long)type;
- (void)setType:;
- (long long)colorStyle;
- (void)setColorStyle:;
@end
