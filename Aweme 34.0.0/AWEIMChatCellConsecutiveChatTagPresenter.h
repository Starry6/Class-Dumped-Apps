@interface AWEIMChatCellConsecutiveChatTagPresenter : AWEIMCellPresenterBase
@property (nonatomic) <AWEIMStreakDisplayManagerProtocol> imStreakDisplayManager;
- (id)imStreakDisplayManager;
- (void)setImStreakDisplayManager:;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (void).cxx_destruct;
@end
