@interface AWEIMChangeChatBgListCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView selectedImageView;
@property (nonatomic) UILabel defaultLabel;
- (void)p_setupUI;
- (void)configWithModel:didSelect:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)defaultLabel;
- (void)setDefaultLabel:;
- (id)selectedImageView;
- (void)setSelectedImageView:;
@end
