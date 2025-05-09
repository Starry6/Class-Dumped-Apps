@interface AWEFormatLiveContainerController : UIViewController
@property (nonatomic) AWEFormatLiveFeedController liveController;
@property (nonatomic) <AWEFeedTableViewCellControllerPlayerDelegate> playerDelegate;
@property (nonatomic) q indexPath;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) NSString referString;
@property (nonatomic) q type;
@property (nonatomic) <AWEAwemePlayInteractionPlayDelegate><AWEAwemePlayInteractionPanelDelegate><AWEAwemePlayInteractionCommerceDelegate><AWEAwemePlayInteractionUpdateDelegate><AWEAwemePlayInteractionUIDisplayDelegate><AWEPlayInteractionViewControllerProtocol> interactionController;
@property (nonatomic) UITableViewCell<AWEFeedTableViewCellProtocol> superCell;
@property (nonatomic) NSDictionary extTrackLog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)referString;
- (void)setReferString:;
- (id)playerDelegate;
- (void)setPlayerDelegate:;
- (void)preloadWithModel:;
- (id)liveController;
- (void)setLiveController:;
- (void)p_addChild;
- (void)setModel:;
- (void)play;
- (long long)indexPath;
- (void)viewDidLoad;
- (void)prepareForDisplay;
- (long long)type;
- (void)setIndexPath:;
- (id)model;
- (void)setType:;
- (void).cxx_destruct;
- (void)reset;
- (void)stop;
- (void)pause;
- (id)interactionController;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
