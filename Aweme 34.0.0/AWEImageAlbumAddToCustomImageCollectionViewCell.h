@interface AWEImageAlbumAddToCustomImageCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) AWEImageAlbumAddToCustomImagePickerSelectIndicator selectIndicator;
@property (nonatomic) <AWEImageAlbumAddToCustomImageCollectionViewCellDelegate> delegate;
@property (nonatomic) q index;
- (void)configWithImage:;
- (void)updateWithSelected:;
- (void)configWithImageURLList:selected:isHorizontal:;
- (void)setIndex:;
- (long long)index;
- (id)delegate;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setImageView:;
- (id)imageView;
- (void)handleSelection;
- (id)selectIndicator;
- (void)setSelectIndicator:;
+ (id)identifier;
@end
