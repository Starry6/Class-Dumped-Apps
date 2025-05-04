@interface AWEUserLoginOtherLoginView : UIView
@property (nonatomic) UIButton otherLoginButton;
@property (nonatomic) <AWEUserLoginOtherLoginViewDelegate> delegate;
- (id)otherLoginButton;
- (id)createLoginButton;
- (void)setOtherLoginButton:;
- (void)otherLoginAction;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
@end
