@interface AWEDetailLinkCell : UICollectionViewCell
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) @ model;
@property (nonatomic) UIView linkContainerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel linkLabel;
- (void)setLinkLabel:;
- (void)p_addSubviews;
- (void)configWithModel:serviceProvider:;
- (void)p_CMCEventRouteWithModel:;
- (void)clickedLinkView:;
- (void)setModel:;
- (void)setProvider:;
- (id)initWithFrame:;
- (id)model;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)provider;
- (void)setIconImageView:;
- (id)linkLabel;
- (id)linkContainerView;
- (void)setLinkContainerView:;
@end
