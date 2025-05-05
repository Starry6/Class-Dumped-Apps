@interface BNSceneContract.BatchManageViewController : BNCommonAdapter.BNBasicViewController
@property (nonatomic) NSString etGroupID;
@property (nonatomic) NSString etGroupType;
@property (nonatomic) NSString etPageName;
- (id)etGroupID;
- (id)etGroupType;
- (id)etPageName;
- (id)dragger:cellForRowAt:;
- (void)dragger:didBeginDraggingAt:;
- (void)dragger:didEndDraggingAt:;
- (BOOL)dragger:moveDraggingAt:newIndexPath:;
- (BOOL)dragger:shouldBegan:;
- (void)tapAllSelectButton;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)loadView;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
