@interface AWEIMMessageShowAnimationInteractor : AWEIMInteractorObject
@property (nonatomic) UIView holderView;
@property (nonatomic) AWEIMWordAnimationView animateView;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL animationViewHide;
- (void)setAnimateView:;
- (void)afterViewDidLoad;
- (id)animateView;
- (BOOL)animationViewHide;
- (id)holderView;
- (void)p_regFloatViewChangeKVO;
- (id)p_regularToUrlDictionary;
- (void)p_trackWordAnimateWithMessage:andModel:;
- (BOOL)playAnimate:;
- (BOOL)receiveTextMessage:thenPlay:;
- (void)setAnimationViewHide:;
- (void)setHolderView:;
- (id)vcParent;
- (void)viewControllerWillDealloc;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (BOOL)hasAppeared;
- (void)setHasAppeared:;
@end
