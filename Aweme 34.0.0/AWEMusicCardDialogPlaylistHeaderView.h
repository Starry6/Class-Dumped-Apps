@interface AWEMusicCardDialogPlaylistHeaderView : UIView
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) NSString iconName;
@property (nonatomic) UIImageView icon;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setupSubview;
- (void)adjustAndApplyTitle:defaultTitle:;
- (id)initWithFrame:title:defaultTitle:subTitle:subtitleIcon:;
- (id)icon;
- (id)iconName;
- (id)nameLabel;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setIconName:;
- (void)setNameLabel:;
+ (double)viewHeight;
@end
