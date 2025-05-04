@interface AWEPadNumKeyboard : UIView
@property (nonatomic) NSMutableArray keyboardButtons;
@property (nonatomic) <AWEPadNumKeyboardDelegate> delegate;
@property (nonatomic) UIStackView containerView;
- (void)p_setupUI;
- (id)p_systemKeyboardColor;
- (void)p_setNumButtonWithIndex:;
- (void)p_setDeleteButton;
- (void)setKeyBoard;
- (void)orientationWillChange;
- (void)p_setVerticalKeyBoard;
- (void)p_setHorizontalKeyBoard;
- (id)keyboardButtons;
- (void)setKeyboardButtons:;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)buttonTouchDown:;
- (void)buttonTouchUp:;
- (void)orientationDidChange;
@end
