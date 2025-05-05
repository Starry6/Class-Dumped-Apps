@interface AWEIMMessageEmojiAnimator : NSObject
@property (nonatomic) YYAnimatedImageView view;
@property (nonatomic) BOOL hasAddOberver;
- (BOOL)hasAddOberver;
- (void)p_addObserver;
- (void)p_removeObserver;
- (void)playEmojiReplyDoubleClickAnimationWithCell:bubbleFrame:interactPosition:;
- (void)setHasAddOberver:;
- (void)dealloc;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (id)view;
- (void).cxx_destruct;
- (void)setView:;
+ (void)preloadAnimatorResourceIfNeed;
@end
