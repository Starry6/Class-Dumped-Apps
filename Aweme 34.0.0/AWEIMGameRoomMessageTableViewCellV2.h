@interface AWEIMGameRoomMessageTableViewCellV2 : AWEIMGameRoomMessageTableViewCell
@property (nonatomic) AWEIMGameRoomInviteMessageV2 gameMessageV2;
- (void)p_refreshUIWithStatus:;
- (void)p_enterBtnTapped;
- (void)afterMessageConfigured;
- (void)p_trackGameCardDidAppear;
- (void)p_trackGameDidTapped;
- (void)setGameMessageV2:;
- (void)p_refreshGameRoomMessageStatusWithMessage:;
- (id)gameMessageV2;
- (void)p_requestRoomStatusWithRoomID:completion:;
- (void).cxx_destruct;
- (void)willDisplayCell;
+ (id)identifier;
@end
