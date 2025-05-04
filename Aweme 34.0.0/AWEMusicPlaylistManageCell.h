@interface AWEMusicPlaylistManageCell : UITableViewCell
@property (nonatomic) UIImageView reorderBars;
@property (nonatomic) DUXRadioBox selectRadio;
@property (nonatomic) UILabel title;
@property (nonatomic) UILabel author;
@property (nonatomic) UIView effectView;
- (id)selectRadio;
- (void)setSelectRadio:;
- (id)reorderBars;
- (void)setReorderBars:;
- (id)author;
- (id)effectView;
- (void)setEffectView:;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (id)title;
- (void)setAuthor:;
- (void)setTitle:;
- (void)setupUI;
@end
