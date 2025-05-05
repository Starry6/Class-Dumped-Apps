@interface IESECSKUBottomButton : IESECHighlightButton
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) CALayer maskLayer;
@property (nonatomic) UILabel textWithIconLabel;
@property (nonatomic) IESECSKUBottomButtonModel buttonModel;
- (void)setButtonModel:;
- (id)buttonModel;
- (void)setTextWithIconLabel:;
- (id)textWithIconLabel;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setHighlighted:;
- (id)maskLayer;
- (void)setGradientLayer:;
- (void)setMaskLayer:;
@end
