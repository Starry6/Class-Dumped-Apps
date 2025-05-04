@interface AWEDetailPropCollectionCell : UICollectionViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIView selectedIndicatorView;
- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:;
- (void)showSelectedIndicatorView:animate:;
- (void)prepareForReuse;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setIconImageView:;
@end
