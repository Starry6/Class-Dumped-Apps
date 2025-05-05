@interface IESLiveLayoutInteractContainer : IESLiveLayoutBaseContainer
@property (nonatomic) IESLiveLayoutBaseContainer publicScreenContainer;
@property (nonatomic) IESLiveLayoutBaseContainer bottomRightContainer;
- (id)bottomRightContainer;
- (void)containerOrientationChanged:;
- (id)publicScreenContainer;
- (void)setBottomRightContainer:;
- (void)setPublicScreenContainer:;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
