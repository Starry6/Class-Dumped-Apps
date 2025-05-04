@interface AWEIMMessageListAnimateEmojiComponent : AWEIMComponentBase
@property (nonatomic) q firstScreenMinMsgPullIndex;
@property (nonatomic) q readIndexWhenEnterChat;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (void)hostVC_afterFirstRender;
- (void)setReadIndexWhenEnterChat:;
- (long long)getFirstScreenMinMsgPullIndex;
- (long long)getReadIndexWhenEnterChat;
- (void)p_loadEmojiAnimationIfNeed;
- (void)setFirstScreenMinMsgPullIndex:;
- (long long)firstScreenMinMsgPullIndex;
- (id)p_resolveLittleEmojiConfig;
- (long long)readIndexWhenEnterChat;
+ (BOOL)canCreateComponentWithContext:;
@end
