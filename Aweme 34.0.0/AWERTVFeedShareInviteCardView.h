@interface AWERTVFeedShareInviteCardView : AWEIMRTVInviteCardView
@property (nonatomic) AWEIMRTVInviteFriendMessage message;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)renderModel:;
- (void)didReceiveCommandMessage:;
- (void)configComponents;
- (void)handleBubbleTapAction:;
- (void)handleJoinButtonClick:;
- (id)__roomTerminalLocalExtKey;
- (void)__markRoomTerminal;
- (void)__requestRoomStatusWithRoomID:completion:;
- (void)__handleJoinRoom;
- (void)__configSubtitleLabelWithRoomTerminal:;
- (void)__refreshInviteCardStatusWithShowTips:;
- (void)__refreshUIWithRoomTerminal:;
- (id)message;
- (void).cxx_destruct;
- (void)setMessage:;
+ (BOOL)enableInvokeNewRoom;
@end
