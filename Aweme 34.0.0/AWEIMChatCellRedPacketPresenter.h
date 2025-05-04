@interface AWEIMChatCellRedPacketPresenter : AWEIMCellPresenterBase
@property (nonatomic) IESIMStreakFlameViewConfig config;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
@end
