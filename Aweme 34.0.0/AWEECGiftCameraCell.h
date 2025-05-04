@interface AWEECGiftCameraCell : UICollectionViewCell
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) AWEURLModel urlModel;
@property (nonatomic) @? clickBlock;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)urlModel;
- (void)setUrlModel:;
- (void)p_setupView;
- (void)p_setupLayout;
- (void)tap:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
@end
