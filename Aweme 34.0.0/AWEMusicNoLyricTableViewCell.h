@interface AWEMusicNoLyricTableViewCell : UITableViewCell
@property (nonatomic) UIImageView logoView;
@property (nonatomic) UILabel songNameLabel;
@property (nonatomic) UILabel authorNameLabel;
@property (nonatomic) UILabel durationLabel;
@property (nonatomic) UILabel tipLabel;
- (void)setAuthorNameLabel:;
- (id)authorNameLabel;
- (void)configWithMusicModel:;
- (id)songNameLabel;
- (void)_setupViewComponents;
- (void)setSongNameLabel:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)setTipLabel:;
- (id)tipLabel;
- (id)durationLabel;
- (void)setDurationLabel:;
- (id)logoView;
- (void)setLogoView:;
@end
