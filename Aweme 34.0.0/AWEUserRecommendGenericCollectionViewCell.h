@interface AWEUserRecommendGenericCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView separatorView;
@property (nonatomic) UIView<AWEUserRecommendCellViewProtocol> basicView;
- (id)basicView;
- (void)setBasicView:;
- (id)initWithFrame:;
- (void)setSeparatorView:;
- (void)setHighlighted:;
- (void).cxx_destruct;
- (id)separatorView;
@end
