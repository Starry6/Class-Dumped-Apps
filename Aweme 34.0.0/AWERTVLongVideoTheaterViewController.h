@interface AWERTVLongVideoTheaterViewController : UIViewController
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) <RTVUserProfileManagerInterface> profileManager;
@property (nonatomic) <AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (nonatomic) UIViewController<AWEVideoHallFeedShareViewControllerProtocol> videoHallViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <RTVInteractionFunctionContentDelegate> delegate;
- (void)rxAwakeFromPropertyInjection;
- (void)renderViewModel:;
- (id)videoHallViewController;
- (id)__createDataController;
- (void)clickAlbum:;
- (void)clickAweme:;
- (void)selectLongVideo:withParams:;
- (void)setVideoHallViewController:;
- (id)delegate;
- (id)viewModel;
- (void)viewDidLoad;
- (id)injector;
- (void)pushViewController:animated:;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)profileManager;
@end
