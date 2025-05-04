@interface AWEMemoriesLocalImageCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) NSInteger imageRequestID;
@property (nonatomic) NSString localIdentifier;
@property (nonatomic) AWEMemoriesPlayerTileModel tileModel;
- (void)p_setupUI;
- (void)didEndDisplay;
- (id)tileModel;
- (void)setTileModel:;
- (id)initWithFrame:;
- (id)localIdentifier;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setLocalIdentifier:;
- (int)imageRequestID;
- (void)setImageRequestID:;
@end
