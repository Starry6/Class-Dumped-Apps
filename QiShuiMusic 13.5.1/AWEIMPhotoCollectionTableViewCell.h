@interface AWEIMPhotoCollectionTableViewCell : UITableViewCell
@property (nonatomic) NSInteger requestID;
@property (nonatomic) PHAsset asset;
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel collectionTitleLabel;
@property (nonatomic) UILabel collectionNumberLabel;
- (id)collectionNumberLabel;
- (id)collectionTitleLabel;
- (void)configWithCollection:;
- (id)coverImageView;
- (void)setCollectionNumberLabel:;
- (void)setCollectionTitleLabel:;
- (void)setCoverImageView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)layoutSubviews;
- (id)asset;
- (void)commonInit;
- (int)requestID;
- (void).cxx_destruct;
- (void)setAsset:;
- (void)setRequestID:;
@end
