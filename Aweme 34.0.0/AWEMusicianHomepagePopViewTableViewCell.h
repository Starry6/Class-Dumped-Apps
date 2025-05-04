@interface AWEMusicianHomepagePopViewTableViewCell : UITableViewCell
@property (nonatomic) UILabel rankLabel;
@property (nonatomic) UILabel songTitleLabel;
@property (nonatomic) UILabel descriptionLabel;
- (void)configSubviews;
- (id)songTitleLabel;
- (void)refreshWithTitle:description:rankNum:;
- (void)setSongTitleLabel:;
- (void)setDescriptionLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)descriptionLabel;
- (id)rankLabel;
- (void)setRankLabel:;
@end
