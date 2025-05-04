@interface AWEMemoriesPlayerThumbnailCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) NSInteger imageRequestID;
@property (nonatomic) double screenScale;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) AWEMemoriesPlayerTileModel model;
- (void)p_setupUI;
- (double)screenScale;
- (void)setModel:;
- (id)initWithFrame:;
- (void)setScreenScale:;
- (id)model;
- (id)localIdentifier;
- (void).cxx_destruct;
- (id)imageSize;
- (void)setImageView:;
- (id)imageView;
- (void)setLocalIdentifier:;
- (int)imageRequestID;
- (void)setImageRequestID:;
@end
