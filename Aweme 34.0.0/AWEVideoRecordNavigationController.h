@interface AWEVideoRecordNavigationController : UINavigationController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL enableRightSlideRecord;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (void)setEnableRightSlideRecord:;
- (BOOL)enableRightSlideRecord;
- (id)initWithRootViewController:;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillDisappear:;
- (void)viewDidDisappear:;
- (void)viewWillAppear:;
- (void)viewDidAppear:;
@end
