@interface AWESearchMusicSortTabViewCell : DUXBaseTableViewCell
@property (nonatomic) AWESearchMusicSortTabViewCellContentView infoView;
- (void)configUI;
- (void)configWithModel:vc:;
- (long long)currentSelectedMode;
- (id)initWithStyle:reuseIdentifier:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)infoView;
- (void)setInfoView:;
+ (id)identifier;
@end
