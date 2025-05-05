@interface UIKeyboardInputModeIndicator : UIView
@property (nonatomic) UIImageView indicatorView;
@property (nonatomic) NSString inputModeIdentifier;
- (id)intrinsicContentSize;
- (void)setInputModeIdentifier:;
- (void).cxx_destruct;
- (id)indicatorView;
- (id)inputModeIdentifier;
- (id)initWithKeyboardInputModeIdentifier:;
- (void)setupView;
- (void)updateIndicator;
- (void)setIndicatorView:;
@end
