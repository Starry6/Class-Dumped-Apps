@interface IESLivePKRecommendTabCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) Q style;
- (void)changeStyleWithPanelType:;
- (BOOL)isListOpt;
- (void)setTitleLabel:;
- (id)containerView;
- (void)setContainerView:;
- (void)setSelected:;
- (void)setStyle:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)titleLabel;
- (void)setupView;
- (void)setTitleLabelText:;
@end
