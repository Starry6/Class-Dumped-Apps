@interface AWEIMChatCellTagPresenter : AWEIMCellPresenterBase
@property (nonatomic) NSString tagString;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (void)setTagString:;
- (id)tagString;
- (long long)cellAccessibilityOrder;
- (void).cxx_destruct;
@end
