@interface AWEIMDanmakuEmoticonCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView placeholderBGView;
@property (nonatomic) UIView selectedCircleView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEIMDanmakuEmoticonEditCellViewModel viewModel;
- (void)p_setupUI;
- (void)renderWithViewModel:;
- (id)selectedCircleView;
- (id)placeholderBGView;
- (void)setPlaceholderBGView:;
- (void)setSelectedCircleView:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
@end
