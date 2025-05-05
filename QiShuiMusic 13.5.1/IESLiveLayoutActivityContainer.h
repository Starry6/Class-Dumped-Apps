@interface IESLiveLayoutActivityContainer : IESLiveLayoutBaseContainer
@property (nonatomic) IESLiveLayoutPlaceholderView rightSpacing;
@property (nonatomic) IESLiveLayoutBaseContainer rightContainer;
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
