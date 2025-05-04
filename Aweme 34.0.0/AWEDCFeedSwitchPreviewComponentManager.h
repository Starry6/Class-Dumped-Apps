@interface AWEDCFeedSwitchPreviewComponentManager : AWEShellControllerManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)classNameArray;
- (void)quitWithSelectIndex:animated:;
- (void)beginMoveInAnimation;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
@end
