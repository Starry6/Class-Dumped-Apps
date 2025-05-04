@interface AWEPadSkyLightContentViewModel : NSObject
@property (nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol><AWEFeedTableViewControllerProtocol> contentViewController;
@property (nonatomic) <AWESkyLightContainerConfigProtocol> config;
@property (nonatomic) <AWESkyLightContainerViewModelProtocol> containerViewModel;
@property (nonatomic) AWESkyLightContainerViewController skyLightVC;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)containerViewModel;
- (void)setContainerViewModel:;
- (id)skyLightVC;
- (void)skyLightSatusChanged:;
- (void)setSkyLightVC:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setContentViewController:;
- (void)refreshWithCompletion:;
- (id)contentViewController;
@end
