@interface AWEPadChildSkyLightContentViewModel : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFeedTableViewControllerProtocol> contentViewController;
@property (nonatomic) <AWESkyLightContainerConfigProtocol> config;
@property (nonatomic) NSNumber kidAge;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWESkyLightContainerViewModelProtocol> containerViewModel;
@property (nonatomic) AWESkyLightContainerViewController skyLightVC;
- (void)didFinishLogin;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)containerViewModel;
- (void)setContainerViewModel:;
- (id)skyLightVC;
- (id)kidAge;
- (void)skyLightSatusChanged:;
- (void)setSkyLightVC:;
- (void)setKidAge:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setContentViewController:;
- (void)refreshWithCompletion:;
- (id)contentViewController;
@end
