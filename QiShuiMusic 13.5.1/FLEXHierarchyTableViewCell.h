@interface FLEXHierarchyTableViewCell : UITableViewCell
@property (nonatomic) UIView depthIndicatorView;
@property (nonatomic) UIImageView colorCircleImageView;
@property (nonatomic) UIView backgroundColorCheckerPatternView;
@property (nonatomic) UIView viewBackgroundColorView;
@property (nonatomic) q viewDepth;
@property (nonatomic) UIColor randomColorTag;
@property (nonatomic) UIColor indicatedViewColor;
- (id)initWithReuseIdentifier:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setHighlighted:animated:;
- (void)setSelected:animated:;
- (void)layoutSubviews;
- (void)setRandomColorTag:;
- (void)setViewDepth:;
- (id)indicatedViewColor;
- (void)setIndicatedViewColor:;
- (long long)viewDepth;
- (id)randomColorTag;
- (id)depthIndicatorView;
- (void)setDepthIndicatorView:;
- (id)colorCircleImageView;
- (void)setColorCircleImageView:;
- (id)backgroundColorCheckerPatternView;
- (void)setBackgroundColorCheckerPatternView:;
- (id)viewBackgroundColorView;
- (void)setViewBackgroundColorView:;
- (void).cxx_destruct;
@end
