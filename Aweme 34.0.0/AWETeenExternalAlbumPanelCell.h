@interface AWETeenExternalAlbumPanelCell : UITableViewCell
@property (nonatomic) UIImageView coverImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel durationLabel;
@property (nonatomic) UIImageView diggImageView;
@property (nonatomic) UILabel diggLabel;
- (id)coverImageView;
- (void)setCoverImageView:;
- (id)diggLabel;
- (void)setDiggLabel:;
- (id)diggImageView;
- (void)setDiggImageView:;
- (void)updateCoverWithModel:;
- (void)updateDescriptionWithModel:;
- (void)updateDurationWithModel:;
- (void)updateDiggWithModel:;
- (void)updateWithAwemeModel:isAnchored:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:animated:;
- (void)setupUI;
- (id)durationLabel;
- (void)setDurationLabel:;
@end
