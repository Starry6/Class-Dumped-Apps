@interface AWESmartPhoneView : UIView
@property (nonatomic) @? completion;
@property (nonatomic) UIView gradientMaskView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWESmartPhoneTextField textField;
@property (nonatomic) UILabel tipLabel;
@property (nonatomic) UIButton sureButton;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIView verticalLine;
@property (nonatomic) UIView horizontalLine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)p_setupUI;
- (id)gradientMaskView;
- (void)setGradientMaskView:;
- (id)verticalLine;
- (void)setHorizontalLine:;
- (void)setVerticalLine:;
- (void)handleKeyboardShowNoti:;
- (void)handleKeyboardHideNoti:;
- (void)p_dismiss;
- (id)sureButton;
- (void)setSureButton:;
- (void)didUpdateKeyboardFrame:willShowKeyboard:;
- (void)textFiledEditChanged:;
- (void)gradientMaskViewTapAction:;
- (void)cancelButtonClick:;
- (void)sureButtonClick:;
- (void)shakeAnimationForTipLabel;
- (void)setCancelButton:;
- (void)dealloc;
- (id)completion;
- (void)setCompletion:;
- (void)setBackgroundView:;
- (id)textField;
- (id)initWithFrame:;
- (void)setTextField:;
- (id)backgroundView;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)horizontalLine;
- (void)p_addObservers;
+ (void)showWithCompletion:;
@end
