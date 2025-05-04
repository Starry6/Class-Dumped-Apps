@interface AWEMateMultiCardViewController : UIViewController
@property (nonatomic) AWEMateMultipleCardContainerView multiCardContainerView;
@property (nonatomic) AWEFindFriendsMultiCardViewModel cardContainerViewModel;
@property (nonatomic) BOOL isShowMultiCard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)multiCardContainerView;
- (void)setCardContainerViewModel:;
- (id)cardContainerViewModel;
- (id)initWithBigCardVM:;
- (void)setMultiCardContainerView:;
- (BOOL)isShowMultiCard;
- (void)setIsShowMultiCard:;
- (void)play;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)reset;
- (void)pause;
- (void)configureWithModel:;
- (void)didEndDisplaying;
- (void)updateWithModel:;
- (void)willDisplay;
@end
