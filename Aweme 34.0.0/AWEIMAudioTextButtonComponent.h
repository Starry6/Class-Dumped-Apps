@interface AWEIMAudioTextButtonComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)hideAudioTextButton;
- (id)bubbleColor:;
- (void)audioToTextBubbleClick;
- (void)showThreadAppendixView;
- (void)hideThreadAppendixView;
- (void)showAudioToTextBubble:;
+ (BOOL)canCreateComponentWithContext:;
@end
