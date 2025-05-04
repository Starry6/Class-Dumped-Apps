@interface AWEIMMessageTabPrivateChatMgrGuideComponent : AWEIMComponentBase
@property (nonatomic) UIView bubble;
@property (nonatomic) <AWEIMMessageTabPrivateChatMgrInterface> privateChatMgrService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (BOOL)canShowBubble;
- (void)showBubbleInNavigationBar:;
- (BOOL)isCurrentBubbleDisplaying;
- (void)setPrivateChatMgrService:;
- (id)privateChatMgrService;
- (void).cxx_destruct;
- (id)bubble;
- (void)setBubble:;
@end
