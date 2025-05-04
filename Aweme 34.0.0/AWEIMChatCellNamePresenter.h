@interface AWEIMChatCellNamePresenter : AWEIMCellPresenterBase
@property (nonatomic) NSAttributedString nameAttrStr;
@property (nonatomic) NSString nameText;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (void)setNameAttrStr:;
- (id)nameAttrStr;
- (void).cxx_destruct;
- (id)nameText;
- (void)setNameText:;
+ (BOOL)enableTextAsyncDisplay;
@end
