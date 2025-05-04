@interface AWEIronManLandingPageSearchResultCollectionCell : UICollectionViewCell
@property (nonatomic) UIView edgeView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) BOOL useV2;
@property (nonatomic) q cellType;
- (void)awe_themeDidChange:;
- (id)descLabel;
- (void)setDescLabel:;
- (BOOL)useV2;
- (void)setUseV2:;
- (void)updateWithItemModel:;
- (id)edgeView;
- (void)setEdgeView:;
- (void)setUIStyle;
- (long long)cellType;
- (void)setCellType:;
- (id)iconImageView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setIconImageView:;
- (void)setNameLabel:;
- (void)setUpUI;
- (void)layoutUI;
@end
