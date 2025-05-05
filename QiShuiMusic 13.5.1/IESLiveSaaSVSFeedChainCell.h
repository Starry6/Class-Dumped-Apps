@interface IESLiveSaaSVSFeedChainCell : UICollectionViewCell
@property (nonatomic) UIImageView coverView;
@property (nonatomic) UIImageView officialTagView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIImageView tagImageView;
@property (nonatomic) IESLiveSaaSVSFeedChainCellModel cellModel;
- (id)officialTagView;
- (void)setCellModel:;
- (void)setOfficialTagView:;
- (void)setTagImageView:;
- (id)tagImageView;
- (void)setTitleLabel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupSubviews;
- (id)cellModel;
- (id)coverView;
- (void)setCoverView:;
@end
