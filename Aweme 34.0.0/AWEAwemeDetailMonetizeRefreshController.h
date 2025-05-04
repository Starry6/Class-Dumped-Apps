@interface AWEAwemeDetailMonetizeRefreshController : AWEAwemeFeedBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)monetizeScene;
- (id)monetizeContentReferString;
- (id)monetizeDataSource;
- (BOOL)needReceiveRefreshMonetizeContent;
- (void)refreshMonetizeContent:reason:;
- (id)currentMonetizeContent;
- (id)monetizeSceneContainer;
- (id)monetizeContentTrackParams;
- (void)refreshMonetizeForInnerContainerWithAwemes:;
- (void)refreshMonetizeForOuterContainerWithAwemes:;
- (void)dealloc;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)viewDidLoad;
@end
