@interface SHSheetGroupActivitySharingController : UIViewController
@property (nonatomic) UIViewController<GPGroupActivitySharingControllerHelpers> groupActivitySharingController;
@property (nonatomic) <SHSheetGroupActivitySharingControllerDelegate> delegate;
@property (nonatomic) NSString shareSheetSessionID;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithItemProvider:;
- (void)setShareSheetSessionID:;
- (id)shareSheetSessionID;
- (id)groupActivitySharingController;
- (void)setGroupActivitySharingController:;
@end
