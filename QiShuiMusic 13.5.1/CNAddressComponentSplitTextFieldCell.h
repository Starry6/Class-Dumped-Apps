@interface CNAddressComponentSplitTextFieldCell : CNAddressComponentTextFieldCell
@property (nonatomic) UITextField textFieldLeft;
@property (nonatomic) UITextField textFieldRight;
@property (nonatomic) CNRepeatingGradientSeparatorView separator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setSeparator:;
- (id)initWithStyle:reuseIdentifier:;
- (id)textAttributes;
- (void)setTextAttributes:;
- (void).cxx_destruct;
- (id)containerView:layoutFrameForArrangedSubview:withProposedFrame:;
- (id)separator;
- (id)newSeparatorView;
- (id)textFields;
- (void)setupTextFields;
- (id)textFieldLeft;
- (void)setTextFieldLeft:;
- (id)textFieldRight;
- (void)setTextFieldRight:;
+ (id)cellIdentifier;
+ (Class)containerViewClass;
@end
