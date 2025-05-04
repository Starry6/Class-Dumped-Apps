@interface AWEIMAlbumListCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) NSString representedAssetIdentifier;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configWithModel:;
- (void)addSubviews;
- (void)setUpFrames;
- (void)p_configWithAssets:;
- (void)commonInit;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)representedAssetIdentifier;
- (void)setRepresentedAssetIdentifier:;
- (void)setNumberLabel:;
- (id)numberLabel;
@end
