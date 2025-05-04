@interface AWEFormatAudioStreamComponent : AWEIMComponentBase
- (void)playAudios:;
- (void)stopPlay;
- (void)getFormatAudioStreamWithRoomID:reqId:msgReqId:text:;
- (void)interruptCurrentAudioStream;
- (void)interruptAudioStreamWithReqId:;
- (BOOL)currentMsgDidPlayed:;
- (void)setMsgDidPlayed:;
- (void)digitalHumanInteractionModeDidChange:to:;
- (void)willSendNewMessage;
- (void)didReceiveNewMessageWithMessageProtocol:reason:;
- (void)hostVC_willDealloc;
- (void)app_didEnterBackground;
- (void)app_willEnterForeground;
- (void)hostVC_viewDidDisappear;
- (void)hostVC_viewWillAppear;
- (void)imAudioWillRecordNotified;
- (void)typewriterMessageOccurException:msg:;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
