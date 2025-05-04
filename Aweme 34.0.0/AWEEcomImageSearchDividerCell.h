@interface AWEEcomImageSearchDividerCell : UICollectionViewCell
@property (nonatomic) UILabel textView;
@property (nonatomic) CAGradientLayer leftGradientLayer;
@property (nonatomic) CAGradientLayer rightGradientLayer;
- (void)configWithModel:;
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
- (void).cxx_destruct;
- (id)componentView;
- (void)updateWithViewModel:;
+ (double)heightForModel:containerWidth:;
+ (id)sizeWithViewModel:width:;
+ (id)identifier;
@end
