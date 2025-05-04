@interface AWEIMOnlinePrivacyTopSearchView : UIView
@property (nonatomic) UIView cuttingline;
@property (nonatomic) UIImageView searchIconView;
@property (nonatomic) UITextField textField;
@property (nonatomic) UIButton clearButton;
- (void)clearButtonClicked:;
- (id)searchIconView;
- (void)clearSearchView;
- (id)cuttingline;
- (void)setCuttingline:;
- (void)setSearchIconView:;
- (id)textField;
- (id)initWithFrame:;
- (void)setTextField:;
- (void).cxx_destruct;
- (id)clearButton;
- (void)setupUI;
- (void)setClearButton:;
@end
