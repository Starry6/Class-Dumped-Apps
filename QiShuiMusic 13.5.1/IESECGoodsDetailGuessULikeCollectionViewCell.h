@interface IESECGoodsDetailGuessULikeCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESECGoodsDetailGuessULikeViewModel viewModel;
@property (nonatomic) UIScrollView recommendScrollView;
@property (nonatomic) IESECMallRecommendView recommendView;
- (void)configWithViewModel:;
- (id)recommendScrollView;
- (id)recommendView;
- (void)setRecommendScrollView:;
- (void)setRecommendView:;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
