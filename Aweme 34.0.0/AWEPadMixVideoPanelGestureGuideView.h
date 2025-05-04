@interface AWEPadMixVideoPanelGestureGuideView : UIView
@property (nonatomic) LOTAnimationView animationView;
@property (nonatomic) DUXBaseLabel tipLabel;
@property (nonatomic) UIPanGestureRecognizer pan;
@property (nonatomic) <AWEPadMixVideoPanelGestureGuideViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addGesture;
- (id)aAWEPadMixVideoPanelAdapter;
- (void)panAction:;
- (id)init;
- (id)pan;
- (id)delegate;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setPan:;
- (void)setTipLabel:;
- (id)tipLabel;
- (void)setupUI;
- (id)animationView;
- (void)setAnimationView:;
+ (Class)aAWEPadMixVideoPanelAdapterClass;
@end
