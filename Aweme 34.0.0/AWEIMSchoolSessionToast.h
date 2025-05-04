@interface AWEIMSchoolSessionToast : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
- (void)p_createComponents;
- (void)p_layoutComponents;
- (void)p_configComponentsWithMessage:;
- (void)setSubtitleLabel:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)titleLabel;
- (id)initWithMessage:;
- (id)subtitleLabel;
- (void)setIconImageView:;
+ (void)showWithMessage:;
+ (void)showView:;
@end
