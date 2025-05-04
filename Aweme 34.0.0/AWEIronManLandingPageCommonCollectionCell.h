@interface AWEIronManLandingPageCommonCollectionCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) BOOL setUI;
@property (nonatomic) UIImageView iconImage;
- (void)awe_themeDidChange:;
- (BOOL)setUI;
- (void)updateToItemModel:;
- (void)setSetUI:;
- (void)updateToDetailPageUI;
- (void)updateToV2UI;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setUpUI;
@end
