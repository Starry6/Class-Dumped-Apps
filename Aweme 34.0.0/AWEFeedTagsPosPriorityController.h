@interface AWEFeedTagsPosPriorityController : AWEPlayInteractionBaseController
@property (nonatomic) AWEFeedTagsPriorityManager tagsPriorityManager;
@property (nonatomic) NSPointerArray tagsElements;
- (void)updateAllSubViews;
- (id)tagsPriorityManager;
- (void)setTagsPriorityManager:;
- (id)tagsElements;
- (void)setTagsElements:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
