@interface AWEIMFeedDetailLoadingAnimationManager : AWEIMComponentBase
@property (nonatomic) AWEIMMessage<AWEIMFeedDetailLoadingAnimationMessageProtocol> targetMessage;
- (void)componentDidMounted:;
- (id)targetMessage;
- (void)setTargetMessage:;
- (void)didSelectVideoCoverMessage:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
