@interface AWEMemoriesAwemeAlbumCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEMemoriesPlayerTileModel tileModel;
- (id)awemeModel;
- (void)p_setupUI;
- (void)setAwemeModel:;
- (id)tileModel;
- (void)setTileModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
@end
