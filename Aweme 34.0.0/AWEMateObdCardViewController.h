@interface AWEMateObdCardViewController : UIViewController
@property (nonatomic) AWEMateObdCardContainerView cardView;
@property (nonatomic) AWEMateObdCardViewModel viewModel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModel:;
- (void)play;
- (id)viewModel;
- (void)viewDidLoad;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
- (void)pause;
- (id)cardView;
- (void)setCardView:;
- (void)didEndDisplaying;
- (void)updateWithModel:;
- (void)willDisplay;
@end
