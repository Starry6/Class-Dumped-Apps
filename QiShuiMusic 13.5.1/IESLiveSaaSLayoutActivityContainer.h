@interface IESLiveSaaSLayoutActivityContainer : IESLiveSaaSLayoutBaseContainer
@property (nonatomic) IESLiveSaaSLayoutPlaceholderView rightSpacing;
@property (nonatomic) IESLiveSaaSLayoutBaseContainer rightContainer;
- (void)containerOrientationChanged:;
- (id)rightContainer;
- (id)rightSpacing;
- (void)setRightContainer:;
- (void)setRightSpacing:;
- (void)setupLeftContainer;
- (void)setupRightContainer;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
