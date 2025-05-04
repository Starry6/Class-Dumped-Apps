@interface AWEAwemePreventScreenRecordingController : AWEAwemeNewDetailBaseController
@property (nonatomic) BOOL isDisappear;
@property (nonatomic) BOOL isShowingToast;
@property (nonatomic) BOOL isPaidStreamControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willPlay;
- (void)configCell:atIndexPath:tableView:;
- (void)screenCapturedDidChange:;
- (BOOL)isShowingToast;
- (void)setIsShowingToast:;
- (BOOL)shouldPreventScreenRecord;
- (void)popupToastIfNeeded;
- (BOOL)isPaidMixScreenRecording;
- (void)setIsPaidStreamControl:;
- (void)setIsDisappear:;
- (BOOL)isDisappear;
- (BOOL)isPaidStreamControl;
- (void)viewWillDisappear:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:;
@end
