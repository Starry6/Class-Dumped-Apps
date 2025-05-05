@interface IESIMPanelPresentationController : IESIMPanelBasePresentationController
@property (nonatomic) q presentationOrientation;
- (long long)presentationOrientation;
- (void)setPresentationOrientation:;
- (id)frameOfPresentedViewInContainerView;
@end
