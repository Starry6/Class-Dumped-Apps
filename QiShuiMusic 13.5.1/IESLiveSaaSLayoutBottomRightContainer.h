@interface IESLiveSaaSLayoutBottomRightContainer : IESLiveSaaSLayoutBaseContainer
@property (nonatomic) q orientation;
@property (nonatomic) IESLiveSaaSLayoutBaseContainer floatingContainer;
- (BOOL)isBottomProfile;
- (void)containerOrientationChanged:;
- (void)didMoveToParentContainer:;
- (id)floatingContainer;
- (id)makeVerticalContainer;
- (void)remakeBottomInsets;
- (void)setFloatingContainer:;
- (long long)orientation;
- (void).cxx_destruct;
- (void)setOrientation:;
- (void)viewDidLoad;
@end
