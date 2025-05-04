@interface AWELVideoEpisodeSegmentItemCell : UICollectionViewCell
@property (nonatomic) UILabel label;
- (void)refreshUIWithSelected:;
- (void)configWithSelected:title:;
- (void)setLabel:;
- (id)initWithFrame:;
- (id)label;
- (void).cxx_destruct;
- (void)setupUI;
- (BOOL)isDarkMode;
@end
