@interface AWEFeedIMController : AWEBaseController
@property (nonatomic) <AWEFeedUserProfileControllerProtocol> userProfileController;
@property (nonatomic) <AWEFeedTrackControllerProtocol> feedTrackController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)userProfileController;
- (id)feedTrackController;
- (id)authorForUserProfileViewControllerWithModel:;
- (id)paramsForTrackEventType:initialContextParams:;
- (void)setUserProfileController:;
- (void)setFeedTrackController:;
- (id)paramsForEnterPersonalDetail;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
