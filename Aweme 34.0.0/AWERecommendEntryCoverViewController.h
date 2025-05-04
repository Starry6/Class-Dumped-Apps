@interface AWERecommendEntryCoverViewController : UIViewController
@property (nonatomic) AWERecommendEntryCoverView coverView;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeButtonClicked:;
- (void)recommendEntryExitEditMode:;
- (void)setModel:;
- (void)viewDidLoad;
- (id)model;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)coverView;
- (void)setCoverView:;
- (void)initUI;
- (void)setupNotification;
@end
