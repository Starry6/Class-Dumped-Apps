@interface AWEIMMessageTabNaviBubbleComponent : AWEIMComponentBase
@property (nonatomic) NSArray bubbleComponents;
@property (nonatomic) BOOL hasShownBubble;
@property (nonatomic) BOOL blockedBySplash;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (BOOL)isNaviGuideBubbleDisplaying;
- (void)p_didSplashDisappear:;
- (void)setBlockedBySplash:;
- (BOOL)blockedBySplash;
- (void)setBubbleComponents:;
- (void)p_arrangementBubbles;
- (id)bubbleComponents;
- (BOOL)hasShownBubble;
- (void)setHasShownBubble:;
- (void).cxx_destruct;
- (id)componentManager;
@end
