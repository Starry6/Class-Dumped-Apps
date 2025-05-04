@interface AWETeenHomeAlbumCollectItemCell : UICollectionViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) AWEMinorAlbum album;
- (void)p_setupUI;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)setAlbum:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)album;
@end
