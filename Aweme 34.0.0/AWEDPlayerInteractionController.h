@interface AWEDPlayerInteractionController : AWEDPlayerInteractionBaseController
@property (nonatomic) Q state;
@property (nonatomic) NSTimer quietTimer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)activateType;
- (void)afterSetData:;
- (BOOL)shouldResponseGestureRecognizer:;
- (BOOL)handleResponseGestureRecognizer:;
- (void)updateDPlayerState:;
- (void)changeInteractionToState:;
- (void)changeInteractionToState:animated:;
- (void)triggerQuietTimerWithState:;
- (void)resetQuietTimer;
- (id)quietTimer;
- (void)setQuietTimer:;
- (BOOL)singleTapEnableEnterQuiteMode;
- (void)dealloc;
- (unsigned long long)state;
- (void).cxx_destruct;
- (void)reset;
- (void)setState:;
- (void)containerViewDidLoad;
@end
