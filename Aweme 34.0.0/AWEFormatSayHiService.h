@interface AWEFormatSayHiService : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (BOOL)canSendWelcome;
- (id)getSayHiMsgReqId;
- (void)didReceiveNewMessageWithMessageProtocol:reason:;
- (void)didReceiveSendMessageProtocolResponse:message:result:;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
@end
