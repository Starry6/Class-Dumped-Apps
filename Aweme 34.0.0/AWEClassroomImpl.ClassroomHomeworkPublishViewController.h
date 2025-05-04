@interface AWEClassroomImpl.ClassroomHomeworkPublishViewController : UIViewController
- (BOOL)configWithRouterParamDict:;
- (id)collectionView:cellForItemAtIndexPath:;
- (long long)collectionView:numberOfItemsInSection:;
- (void)textViewDidChange:;
- (void)textViewDidEndEditing:;
- (void)keyboardDidHideWithNotification:;
- (void)keyboardWillChangeFrameWithNotification:;
- (void)appDidEnterBackground;
- (void)submitAction;
- (void)expandAction;
- (void)viewDidLoad;
- (id)initWithNibName:bundle:;
- (void).cxx_destruct;
- (void)touchesBegan:withEvent:;
- (void)viewDidAppear:;
- (id)initWithCoder:;
@end
