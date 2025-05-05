@interface WKPasswordView : UIView
@property (nonatomic) NSString documentName;
@property (nonatomic) @? userDidEnterPassword;
- (void)dealloc;
- (void)_keyboardDidShow:;
- (void)layoutSubviews;
- (void)hide;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)didBeginEditingPassword:inView:;
- (void)didEndEditingPassword:inView:;
- (void)userDidEnterPassword:forPasswordView:;
- (id)initWithFrame:documentName:;
- (id)documentName;
- (void)showInScrollView:;
- (void)showPasswordFailureAlert;
- (id)userDidEnterPassword;
- (void)setUserDidEnterPassword:;
@end
