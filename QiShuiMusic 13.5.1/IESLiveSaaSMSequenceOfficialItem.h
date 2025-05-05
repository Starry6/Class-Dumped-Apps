@interface IESLiveSaaSMSequenceOfficialItem : UIView
@property (nonatomic) HTSLiveSaaSMSequenceStore store;
@property (nonatomic) UIView titleContainerView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIView backgroundView;
- (void)applyGradientFromColor:toColor:withStr:toLabel:;
- (void)setupBgColor;
- (void)setupPinkArrow;
- (void)setupTitleContainer;
- (void)tapViewTapped:;
- (id)backgroundView;
- (void)setStore:;
- (id)initWithStore:;
- (void)setTitleLabel:;
- (id)iconView;
- (void)setIconView:;
- (void)updateWithString:;
- (void).cxx_destruct;
- (void)setBackgroundView:;
- (id)store;
- (id)titleLabel;
- (id)titleContainerView;
- (void)setupAvatar;
- (void)setTitleContainerView:;
@end
