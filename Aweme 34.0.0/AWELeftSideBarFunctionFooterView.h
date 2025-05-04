@interface AWELeftSideBarFunctionFooterView : UIView
@property (nonatomic) DUXButton backgroundButton;
@property (nonatomic) AWELeftSideBarFunctionFooterContentView contentView;
@property (nonatomic) <AWELeftSideBarFunctionFooterViewDelegate> delegate;
@property (nonatomic) q viewStyle;
- (void)initView;
- (void)updateIconImageWithUrl:;
- (void)updateViewStyle:;
- (void)initBackgroundButton;
- (void)initContentView;
- (void)onClickBackgroundButton;
- (void)setBackgroundButton:;
- (id)backgroundButton;
- (id)delegate;
- (long long)viewStyle;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setBadgeHidden:;
- (void)updateLabelText:;
+ (double)footerViewHeightWithViewStyle:;
@end
