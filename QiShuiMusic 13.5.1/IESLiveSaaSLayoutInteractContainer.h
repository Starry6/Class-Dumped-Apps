@interface IESLiveSaaSLayoutInteractContainer : IESLiveSaaSLayoutBaseContainer
@property (nonatomic) IESLiveSaaSLayoutPlaceholderView spacer;
@property (nonatomic) IESLiveSaaSLayoutBaseContainer publicScreenContainer;
@property (nonatomic) IESLiveSaaSLayoutBaseContainer bottomRightContainer;
- (id)bottomRightContainer;
- (void)containerOrientationChanged:;
- (id)publicScreenContainer;
- (void)setBottomRightContainer:;
- (void)setPublicScreenContainer:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)spacer;
- (void)setSpacer:;
@end
