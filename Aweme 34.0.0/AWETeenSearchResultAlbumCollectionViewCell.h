@interface AWETeenSearchResultAlbumCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEMinorAlbum model;
@property (nonatomic) Q currentIndex;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSDictionary logDict;
- (id)logDict;
- (void)setLogDict:;
- (void)p_updateCover;
- (void)configCellWithModel:currentIndex:;
- (void)configCellWithResultModel:currentIndex:;
- (void)setModel:;
- (void)setCurrentIndex:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setImageView:;
- (id)imageView;
- (unsigned long long)currentIndex;
@end
