@interface AWEIMAccountLabelTagPresenter : AWEIMCellPresenterBase
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) UIColor textColor;
@property (nonatomic) NSString officialAccountText;
@property (nonatomic) UIFont textFont;
@property (nonatomic) q tagStyle;
- (void)updateView:;
- (long long)componentViewPosition;
- (id)createViewInCell:;
- (long long)cellAccessibilityOrder;
- (long long)tagStyle;
- (void)setTagStyle:;
- (id)officialAccountText;
- (void)setOfficialAccountText:;
- (id)textFont;
- (void)setTextColor:;
- (id)backgroundColor;
- (void)setBackgroundColor:;
- (void).cxx_destruct;
- (id)textColor;
- (void)setTextFont:;
@end
