@interface AWEIMTextTriggerMatcher : NSObject
@property (nonatomic) AWEIMInterEmojiMatcherController parent;
@property (nonatomic) AWEIMTextTriggerAnimationInfo matchedAnimation;
@property (nonatomic) AWEIMMessage<AWEIMMessageTextTriggerSpecialEffectProtocol> triggerMsg;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isMatcherEnable;
- (BOOL)tryMatch;
- (id)matchedAnimation;
- (id)triggerMsg;
- (void)setTriggerMsg:;
- (id)p_filterCharactor:;
- (id)p_filterUselessWords:;
- (void)setMatchedAnimation:;
- (void)setParent:;
- (id)parent;
- (id)initWithParent:;
- (void).cxx_destruct;
@end
