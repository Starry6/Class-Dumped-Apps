@interface AWETeenEyeProtectLockProgressView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView leftView;
@property (nonatomic) UIView progressView;
@property (nonatomic) UILabel titleLabel;
- (void)p_setupUI;
- (void)setProgress:finished:;
- (id)init;
- (id)progressView;
- (id)containerView;
- (void)setProgressView:;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)leftView;
- (void)setLeftView:;
+ (double)eyeProtectionCountDownTime;
+ (double)eyeProtectionProgressInterval;
@end
