@interface IESLiveExplainWindowInfoView : UIView
@property (nonatomic) UILabel title;
@property (nonatomic) IESLiveSaaSAvatarImageView avatar;
@property (nonatomic) UIView container;
@property (nonatomic) UIView playerContainer;
@property (nonatomic) BOOL ieslivesaas_isLandscape;
- (id)playerContainer;
- (void)changeDisplayFor:;
- (BOOL)ieslivesaas_isLandscape;
- (void)setIeslivesaas_isLandscape:;
- (void)setPlayerContainer:;
- (void)updateMsgHidden:;
- (void)setContainer:;
- (id)init;
- (id)container;
- (void)setTitle:;
- (id)title;
- (void)setup;
- (void).cxx_destruct;
- (id)avatar;
- (void)setAvatar:;
@end
