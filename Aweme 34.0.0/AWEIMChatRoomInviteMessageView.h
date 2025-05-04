@interface AWEIMChatRoomInviteMessageView : UIView
@property (nonatomic) AWEIMChatRoomInviteMessageProps props;
@property (nonatomic) AWEIMRTVInviteCardView inviteCardView;
- (void)p_addGesture;
- (void)p_addSubviews;
- (void)p_initSubviews;
- (void)updateWithProps:;
- (void)p_addConstraint;
- (id)inviteCardView;
- (void)setInviteCardView:;
- (void)p_onTap:;
- (id)props;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setProps:;
@end
