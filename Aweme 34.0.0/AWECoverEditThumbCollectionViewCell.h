@interface AWECoverEditThumbCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) NSString projectUUID;
- (id)projectUUID;
- (void)setProjectUUID:;
- (void)updateMediaType:;
- (void)updateSelectedState:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setIconImageView:;
- (void)updateImage:;
+ (id)cellIdentifier;
@end
