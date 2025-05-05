@interface CustomToastView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIStackView hStack;
@property (nonatomic) UIStackView vStack;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
- (id)getKeyWindow;
- (id)initWithTitle:subtitle:icon:autoHide:;
- (void)presentToast;
- (void)removeFromSuperview;
- (void)hideWithAnimation;
- (void)hideAfter:;
- (id)titleLabel;
- (void)setTitleLabel:;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (id)hStack;
- (void)setHStack:;
- (id)vStack;
- (void)setVStack:;
- (void).cxx_destruct;
@end
