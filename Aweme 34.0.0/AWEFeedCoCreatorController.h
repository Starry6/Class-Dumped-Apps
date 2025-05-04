@interface AWEFeedCoCreatorController : AWEBaseController
@property (nonatomic) <AWEFeedTrackControllerProtocol> feedTrackController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)feedTrackController;
- (id)paramsForTrackEventType:initialContextParams:;
- (void)setFeedTrackController:;
- (id)paramsForVideoClientShowWithInitialContextParams:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
