@interface AWEOpenShareSelectResultCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIButton removeButton;
@property (nonatomic) AWEOpenShareAlbumVideoModel model;
@property (nonatomic) @? didRemoveCallback;
- (void)setDidRemoveCallback:;
- (void)configureUI:;
- (void)removePressed;
- (id)didRemoveCallback;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (id)removeButton;
- (void)setRemoveButton:;
+ (id)reuseIdentifier;
@end
