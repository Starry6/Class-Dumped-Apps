@interface AWEEcomSearchDividerCachalotCardView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel textView;
@property (nonatomic) CAGradientLayer leftGradientLayer;
@property (nonatomic) CAGradientLayer rightGradientLayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)configUI;
- (id)leftGradientLayer;
- (id)rightGradientLayer;
- (void)setLeftGradientLayer:;
- (void)setRightGradientLayer:;
- (void)updateGradientLayerPosition;
- (id)textView;
- (void)setTextView:;
- (id)initWithFrame:;
- (id)contentView;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)componentView;
- (void)updateWithViewModel:;
+ (id)sizeWithViewModel:width:;
@end
