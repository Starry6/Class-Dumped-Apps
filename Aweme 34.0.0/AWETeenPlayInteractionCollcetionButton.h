@interface AWETeenPlayInteractionCollcetionButton : AWETeenPlayInteractionBaseButton
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) BOOL isCollecting;
- (void)initializeElement;
- (void)setIsCollecting:;
- (void)p_collectionAction;
- (void)p_updateUIIfNeeded;
- (void)p_doAnimationWithCollectStatus:requestFailed:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (id)animationView;
- (void)setAnimationView:;
- (BOOL)isCollecting;
@end
