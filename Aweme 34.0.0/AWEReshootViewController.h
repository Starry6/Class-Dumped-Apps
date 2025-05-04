@interface AWEReshootViewController : ACCRecordViewController
@property (nonatomic) AWEStudioIdleTimerHandler idleTimerHandler;
@property (nonatomic) <AWEReshootDelegate> delegate;
@property (nonatomic) ACCRecordViewControllerInputData inputData;
- (void)controllerTaskFinished;
- (void)popSelf;
- (id)idleTimerHandler;
- (void)setIdleTimerHandler:;
- (void)viewWillDisappear:;
- (void)dealloc;
- (id)delegate;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setDelegate:;
@end
