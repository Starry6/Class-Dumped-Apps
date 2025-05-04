@interface AWEIMShareVSLiveContentComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMShareVSLiveMessage message;
@property (nonatomic) AWEIMMessageConversation conversation;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenterIfNeed;
- (void)p_initProps;
- (void)liveCoverTapped:;
- (void)cardAvatarTapped:;
- (BOOL)p_isFansGroup;
- (void)tapLiveCardAction;
- (void)transferToLive;
- (void)p_liveShowTracker;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
- (id)conversation;
- (void)setConversation:;
+ (BOOL)canCreateComponentWithContext:;
+ (id)p_defaultPostImageForMe;
+ (id)p_defaultPostImageForOther;
@end
