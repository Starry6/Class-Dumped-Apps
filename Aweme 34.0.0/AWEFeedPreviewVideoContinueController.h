@interface AWEFeedPreviewVideoContinueController : AWEBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configureCell:withModel:atIndexPath:;
- (void)updatePlayletPaymentInfoWithModels:;
- (void)updateRecorderTimeIfNeed:model:;
- (void)seekTimeIfNeed:model:;
- (BOOL)shouldDisableResetRecorderTime;
- (void)refreshWithModels:;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
- (void)addObservers;
@end
