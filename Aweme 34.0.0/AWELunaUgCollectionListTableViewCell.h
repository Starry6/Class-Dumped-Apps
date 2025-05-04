@interface AWELunaUgCollectionListTableViewCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel songTitleLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIView customMaskView;
- (id)coverImageView;
- (void)setCoverImageView:;
- (void)configSubviews;
- (id)customMaskView;
- (void)setCustomMaskView:;
- (id)songTitleLabel;
- (void)setSongTitleLabel:;
- (void)updateMaskViewWithShouldShow:;
- (void)refreshWithTitle:description:coverImageUrl:;
- (void)setDescriptionLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)descriptionLabel;
@end
