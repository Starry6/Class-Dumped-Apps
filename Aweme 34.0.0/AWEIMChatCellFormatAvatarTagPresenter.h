@interface AWEIMChatCellFormatAvatarTagPresenter : AWEIMCellPresenterBase
@property (nonatomic) double scale;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (double)scale;
- (void)setScale:;
@end
