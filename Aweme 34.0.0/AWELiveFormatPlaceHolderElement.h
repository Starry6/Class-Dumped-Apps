@interface AWELiveFormatPlaceHolderElement : AWELiveTopElement
@property (nonatomic) UIView wrapperView;
- (BOOL)shouldActivateElementWithData:;
- (void)updatePlaceHolder;
- (void)viewController_viewWillTransitionToSize:withTransitionCoordinator:;
- (void)preloadElement;
- (unsigned long long)liveElementType;
- (void)viewDidLoad;
- (id)wrapperView;
- (void)setData:;
- (void).cxx_destruct;
- (void)setWrapperView:;
@end
