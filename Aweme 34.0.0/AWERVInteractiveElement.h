@interface AWERVInteractiveElement : AWERVVideoInfoBaseElement
@property (nonatomic) AWERVInteractiveButtonContainerView interactiveView;
@property (nonatomic) MASConstraint heightConstraint;
@property (nonatomic) AWERVInteractiveViewModel viewModel;
- (id)interactiveView;
- (void)setInteractiveView:;
- (void)addPageContextObserver;
- (id)viewModel;
- (void)viewDidLoad;
- (void)setData:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setHeightConstraint:;
- (id)heightConstraint;
@end
