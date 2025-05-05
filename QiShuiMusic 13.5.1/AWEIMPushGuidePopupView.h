@interface AWEIMPushGuidePopupView : AWEIMBasePopupView
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) Q viewStyle;
@property (nonatomic) Q buttonStyle;
- (void)p_onClickCancel;
- (void)hideWithDuration:;
- (id)initWithViewStyle:buttonStyle:;
- (void)p_onClickConfirm;
- (void)p_setupViews;
- (void)p_updateViews;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (unsigned long long)buttonStyle;
- (unsigned long long)viewStyle;
- (void)show;
- (void).cxx_destruct;
- (void)setCancelButton:;
- (id)titleLabel;
- (id)cancelButton;
- (id)mainWindow;
+ (BOOL)isDisplaying;
@end
