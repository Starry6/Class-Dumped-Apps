@interface AWEVideoDescriptionMaskRelatedRecommendHeaderView : UICollectionReusableView
@property (nonatomic) UILabel recLabel;
@property (nonatomic) UIView leftLineView;
@property (nonatomic) UIView rightLineView;
@property (nonatomic) CAGradientLayer leftGradientLayer;
@property (nonatomic) CAGradientLayer rightGradientLayer;
@property (nonatomic) @? didClickAction;
- (void)handleClick;
- (id)leftLineView;
- (id)rightLineView;
- (void)setLeftLineView:;
- (void)setRightLineView:;
- (id)leftGradientLayer;
- (id)rightGradientLayer;
- (void)setLeftGradientLayer:;
- (void)setRightGradientLayer:;
- (id)didClickAction;
- (void)setDidClickAction:;
- (id)recLabel;
- (id)recLabelFont;
- (void)setRecLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
+ (double)headerViewHeight;
@end
