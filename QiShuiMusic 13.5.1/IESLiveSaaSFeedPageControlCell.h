@interface IESLiveSaaSFeedPageControlCell : UICollectionViewCell
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView indicatorView;
- (void)animationIndicatorViewHidden:;
- (void)update:;
- (void)setTitleLabel:;
- (void)setSelected:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)loadView;
- (id)indicatorView;
- (id)titleLabel;
- (void)setIndicatorView:;
@end
