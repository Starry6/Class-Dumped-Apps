@interface AWEIronManLandingPageDeepRelationCollectionCell : UICollectionViewCell
@property (nonatomic) UIView edgeView;
@property (nonatomic) UIImageView descImage;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel statusLabel;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) AWEIronManLandingPageCustomLabel buttonLabel;
@property (nonatomic) UILabel buttonMsg;
- (void)awe_themeDidChange:;
- (id)buttonMsg;
- (void)setButtonMsg:;
- (id)descImage;
- (void)setDescImage:;
- (id)edgeView;
- (void)setEdgeView:;
- (void)setThemeUI;
- (void)udpateToNewItem:;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)nameLabel;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)buttonLabel;
- (void)setNameLabel:;
- (void)setButtonLabel:;
- (void)setStatusLabel:;
- (id)statusLabel;
- (void)setUpUI;
@end
