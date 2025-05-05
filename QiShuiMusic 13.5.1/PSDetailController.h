@interface PSDetailController : PSViewController
@property (nonatomic) PSEditingPane pane;
- (void)willAnimateRotationToInterfaceOrientation:duration:;
- (void)willRotateToInterfaceOrientation:duration:;
- (void)didRotateFromInterfaceOrientation:;
- (void)dealloc;
- (void)suspend;
- (void)viewWillDisappear:;
- (id)title;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidUnload;
- (void)saveChanges;
- (void)statusBarWillAnimateByHeight:;
- (id)paneFrame;
- (void)setPane:;
- (id)pane;
- (void)loadPane;
@end
