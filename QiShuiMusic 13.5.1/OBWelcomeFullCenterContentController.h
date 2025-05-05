@interface OBWelcomeFullCenterContentController : OBWelcomeController
@property (nonatomic) UIView centerContentView;
@property (nonatomic) NSLayoutConstraint contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (nonatomic) NSArray floatingConstraintGroup;
@property (nonatomic) NSArray pinnedConstraintGroup;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)setCenteredContentView:;
- (void)insertCenterContentView;
- (double)_availablePreScrollContentHeight;
- (void)recalculateLayoutForTraitCollectionChange;
- (id)centerContentView;
- (void)setCenterContentView:;
- (id)contentViewOptionalHeightAnchor;
- (void)setContentViewOptionalHeightAnchor:;
- (double)contentViewMaxHeight;
- (void)setContentViewMaxHeight:;
- (id)floatingConstraintGroup;
- (void)setFloatingConstraintGroup:;
- (id)pinnedConstraintGroup;
- (void)setPinnedConstraintGroup:;
@end
