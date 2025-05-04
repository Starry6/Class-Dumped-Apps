@interface AWEAwemeDetailFriendsController : AWEAwemeNewDetailBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellWillDisplay:forRowAtIndexPath:tableView:;
- (void)registerTableViewCell:;
- (void)configCell:atIndexPath:tableView:;
- (void)showRecommendMeToOthersGuideIfNeed;
- (void)configInteractionTypeWithCell:model:;
- (void)viewWillDisappear:;
- (void)play;
- (void)viewDidAppear:;
@end
