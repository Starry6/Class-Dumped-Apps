@interface AWEFeedUserRecommendController : AWEBaseController
@property (nonatomic) <AWEFeedUserProfileControllerProtocol> userProfileController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userProfileController;
- (id)authorForUserProfileViewControllerWithModel:;
- (id)urlParamsForUserProfileViewControllerWithModel:;
- (void)setUserProfileController:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
