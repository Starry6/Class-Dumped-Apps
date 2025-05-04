@interface AWESearchPhotoSearchTabViewCell : UICollectionViewCell
@property (nonatomic) UIView borderView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) AWESearchPhotoSearchTabViewModel model;
- (void)configUI;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setImageView:;
- (void)setSelected:;
- (id)imageView;
- (id)borderView;
- (void)setBorderView:;
- (void)updateImage:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
