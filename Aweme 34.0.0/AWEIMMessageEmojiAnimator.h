@interface AWEIMMessageEmojiAnimator : NSObject
@property (nonatomic) NSPointerArray animations;
@property (nonatomic) @? didFinshedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDidFinshedBlock:;
- (void)playEmojiReplyDoubleClickAnimationWithView:anchorPoint:;
- (void)p_recordAnimation:;
- (id)didFinshedBlock;
- (void)playEmojiReplyAnimationFileAtPath:centerToView:;
- (void)playEmojiReplyDoubleClickAnimationWithMessage:forView:bubbleFrame:;
- (id)init;
- (id)animations;
- (void).cxx_destruct;
- (void)setAnimations:;
- (void)stopAllAnimations;
+ (void)preloadAnimatorResourceIfNeed;
@end
