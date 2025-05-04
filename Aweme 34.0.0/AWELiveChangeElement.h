@interface AWELiveChangeElement : AWELiveBaseElement
@property (nonatomic) UIView containerView;
- (BOOL)shouldActivateElementWithData:;
- (void)preloadElement;
- (void)didTapChange;
- (void)viewDidLoad;
- (id)containerView;
- (void)setContainerView:;
- (void)setData:;
- (void).cxx_destruct;
@end
