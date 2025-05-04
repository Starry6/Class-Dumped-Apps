@interface AWETeenSubscribeListCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEUserModel user;
@property (nonatomic) AWETeenUserAvatarView avatarView;
@property (nonatomic) AWEBillboardLabel nameLabel;
@property (nonatomic) UIButton subscribeButton;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) @? didClickSubscribe;
- (void)p_setupUI;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (void)configCellWithModel:;
- (void)p_updateThemeWithStatus:;
- (void)subscribeBtnClicked:;
- (id)didClickSubscribe;
- (void)setDidClickSubscribe:;
- (id)user;
- (void)setUser:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)subscribeButton;
- (void)setSubscribeButton:;
@end
