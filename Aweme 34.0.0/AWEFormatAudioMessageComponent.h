@interface AWEFormatAudioMessageComponent : AWEIMComponentBase
- (void)willSendNewMessage;
- (void)componentDidMounted:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
