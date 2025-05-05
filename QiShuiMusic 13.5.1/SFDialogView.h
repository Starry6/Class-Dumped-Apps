@interface SFDialogView : UIView
@property (nonatomic) <SFDialogViewDelegate> delegate;
@property (nonatomic) UIView contentView;
- (void)setTitleText:;
- (id)contentView;
- (void)setDelegate:;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (BOOL)becomeFirstResponder;
- (id)delegate;
- (void).cxx_destruct;
- (void)didAppear;
- (void)willDisappear;
- (void)setObscuredInsets:;
- (void)setMessageText:;
- (void)_keyboardDismissGesture:;
- (void)setUsesOpaqueAppearance:;
- (void)setInputText:placeholder:;
- (void)setPasswordText:placeholder:;
- (void)setDialogActions:;
- (void)setTableViewRows:didSelectRowAction:;
@end
