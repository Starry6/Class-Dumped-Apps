@interface AWEFollowGroupControllerModel : NSObject
@property (nonatomic) Q actionType;
@property (nonatomic) BOOL canReuse;
@property (nonatomic) NSNumber groupID;
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFollowGroupViewControllerProtocol> viewController;
- (id)initWithActionType:groupID:canReuse:viewController:;
- (BOOL)canReuse;
- (void)updateGroupIDForReuse:;
- (unsigned long long)actionType;
- (id)groupID;
- (id)viewController;
- (void).cxx_destruct;
@end
