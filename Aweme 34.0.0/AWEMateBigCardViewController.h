@interface AWEMateBigCardViewController : UIViewController
@property (nonatomic) AWEMateBigCardContainerView cardView;
@property (nonatomic) AWEMateBigCardViewModel viewModel;
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setModel:;
- (void)play;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (id)model;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)reset;
- (void)pause;
- (id)cardView;
- (void)setCardView:;
- (void)didEndDisplaying;
- (void)updateWithModel:;
- (void)willDisplay;
@end
