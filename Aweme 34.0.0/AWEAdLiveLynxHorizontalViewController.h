@interface AWEAdLiveLynxHorizontalViewController : UIViewController
@property (nonatomic) UIView<AWEBDARifleView> rifleView;
@property (nonatomic) <AWEBDARifleViewConfiguration> config;
@property (nonatomic) NSString scheme;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)initialPhaseForPageSheetPresentation:;
- (unsigned long long)phaseTransitionStyleForPageSheetPresentation:;
- (id)pageSheetPresentation:frameOfPresentedViewForPhase:;
- (id)animationControllerForPresentedController;
- (id)animationControllerForDismissedController;
- (id)initWithRifleView:scheme:config:;
- (void)setRifleView:;
- (id)rifleView;
- (void)setConfig:;
- (id)scheme;
- (void)setScheme:;
- (id)init;
- (id)config;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
