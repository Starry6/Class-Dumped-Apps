@interface AWEFormatMessageListNaviBarBackComponent : AWEIMComponentBase
- (void)didUpdateFormatRoom:;
- (void)getFormatRoomInfoFailedWithError:;
- (void)audienceDidLeaveLiveRoom:anchorID:;
- (void)willSendNewMessage;
- (void)didReceiveNewMessageWithMessageProtocol:reason:;
- (void)hostVC_willDealloc;
- (void)backButtonClickAction;
- (long long)naviBarPriority;
- (id)naviBarView;
- (long long)naviBarPosition;
- (id)naviBarViewIntrinsicContentSize;
- (void)backWithCompletion:;
- (void)exitFormatRoomWithBlock:;
- (void)leaveFormatRoom;
- (void)componentDidMounted:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
