@interface AWEIMAlbumListCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel numberLabel;
@property (nonatomic) NSString representedAssetIdentifier;
- (void)addSubviews;
- (void)configWithModel:;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)setUpFrames;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void)commonInit;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)representedAssetIdentifier;
- (void)setRepresentedAssetIdentifier:;
- (id)numberLabel;
- (void)setNumberLabel:;
@end
