@interface AWEIMBatManInviteTableViewCell : AWEIMUserMessageTableViewCell
@property (nonatomic) AWEIMGeneralCardView cardView;
@property (nonatomic) AWEIMBatManInviteMessage gameMessage;
- (void)configWithMessage:;
- (void)setGameMessage:;
- (id)gameMessage;
- (void)p_refreshUIWithStatus:;
- (void)p_refreshBatManRoomStatusWithMessage:;
- (void)p_enterBtnTapped;
- (void)p_requestRoomStatusWithGameID:roomID:completion:;
- (void).cxx_destruct;
- (id)menuItems;
- (void)layoutSubviews;
- (void)setupUI;
- (id)cardView;
- (void)setCardView:;
- (void)willDisplayCell;
+ (id)contentSizeWithMesasge:;
+ (id)identifier;
@end
